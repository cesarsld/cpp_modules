/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:27:31 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/08 16:41:01 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string const _name) {
	name = _name;
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &copy) : name(copy.name) {
	std::cout << "Some random victim clone of " << name << " just appeared!" << std::endl;
	return;
}

Victim::~Victim() {
	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
	return;
}

Victim		&Victim::operator=(Victim const &rhs) {
	std::cout << name << "is stealing " << rhs.name << "'s identity... Wait that's illegal!" << std::endl;
	name = rhs.name;
	return (*this);
}

std::string Victim::greet() const {
	return name;
}

void Victim::getPolymorphed() const {
		std::cout  << name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Victim const &rhs) {
	o << "I am " << rhs.greet() << ", and I like otters" << std::endl;
	return (o);
}
