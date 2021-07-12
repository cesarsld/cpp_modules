/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 21:41:54 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/10 01:45:55 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	type = "";
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy) {
	type = copy.type;
}

WrongAnimal::~WrongAnimal() {
	std::cout << type << " ded" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
	type = rhs.type;
	return *this;
}

std::string WrongAnimal::getType() const{
	return type;
}

void WrongAnimal::makeSound() const {
	std::cout << "I live Wrongly!" << std::endl;
}
