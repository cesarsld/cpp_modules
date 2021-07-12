/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:52:20 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/08 17:02:10 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string const _name) : Victim(_name) {
	std::cout << "Zog Zog." << std::endl;
}

Peon::Peon(Peon const &copy) : Victim(copy) {
	std::cout << "Zog Zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon		&Peon::operator=(Peon const &rhs) {
	Victim::operator=(rhs);
	return (*this);
}

void		Peon::getPolymorphed() const {
	std::cout << name << " has been turned into a pink pony!" << std::endl;
	return;
}
