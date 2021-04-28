/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:17:22 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/26 22:03:28 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const _name, std::string const _title) {
	name = _name;
	title = _title;
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::greet() const {
	return name + ", " + title;
}

void Sorcerer::polymorph(Victim const &v) const {
	v.getPolymorphed();
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &rhs) {
	o << "I am " << rhs.greet() << ", and I like ponies" << std::endl;
	return (o);
}
