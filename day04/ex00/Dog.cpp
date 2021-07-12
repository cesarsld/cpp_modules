/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 21:48:01 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/10 01:51:40 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	type = "Dog";
}

Dog::Dog(Dog const &copy) : Animal(copy) {
	type = copy.type;
	type = "Dog";
}

Dog::~Dog() {
	
}

Dog &Dog::operator=(Dog const &rhs) {
	type = rhs.type;
	type = "Dog";
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}
