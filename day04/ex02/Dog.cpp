/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 21:48:01 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/10 18:15:32 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	type = "Dog";
	brain = new Brain();
	std::cout << "Woof born" << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy) {
	type = copy.type;
	type = "Dog";
	brain = new Brain(*copy.brain);
}

Dog::~Dog() {
	std::cout << "woof ded" << std::endl;
	delete brain;
}

Dog &Dog::operator=(Dog const &rhs) {
	type = rhs.type;
	type = "Dog";
	brain = rhs.brain;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}

Brain *Dog::getBrain() {
	return brain;
}
