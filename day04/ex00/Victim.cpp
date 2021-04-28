/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:27:31 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/26 22:03:23 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string const _name) {
	name = _name;
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
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
