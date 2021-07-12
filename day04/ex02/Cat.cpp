/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 21:48:01 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/10 18:15:25 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	type = "Cat";
	brain = new Brain();
	std::cout << "Miaou born" << std::endl;
}

Cat::Cat(Cat const &copy) : Animal(copy) {
	type = copy.type;
	type = "Cat";
	brain = new Brain(*copy.brain);
}

Cat::~Cat() {
	std::cout << "miaou ded" << std::endl;
	delete brain;
}

Cat &Cat::operator=(Cat const &rhs) {
	type = rhs.type;
	type = "Cat";
	brain = rhs.brain;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Miaou!" << std::endl;
}

Brain *Cat::getBrain() {
	return brain;
}
