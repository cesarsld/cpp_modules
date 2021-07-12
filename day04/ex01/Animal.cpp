/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 21:41:54 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/10 18:14:59 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	type = "";
	std::cout << "Animal born" << std::endl;
}

Animal::Animal(Animal const &copy) {
	type = copy.type;
}

Animal::~Animal() {
	std::cout << type << " ded" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs) {
	type = rhs.type;
	return *this;
}

std::string Animal::getType() const{
	return type;
}

void Animal::makeSound() const {
	std::cout << "I live!" << std::endl;
}
