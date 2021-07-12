/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 21:48:01 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/10 01:51:24 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	type = "Cat";
}

Cat::Cat(Cat const &copy) : Animal(copy) {
	type = copy.type;
	type = "Cat";
}

Cat::~Cat() {
	
}

Cat &Cat::operator=(Cat const &rhs) {
	type = rhs.type;
	type = "Cat";
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Miaou!" << std::endl;
}
