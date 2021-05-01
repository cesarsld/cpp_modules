/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 19:25:58 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/30 19:38:15 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	_xp = 0;
	return;
}

Ice::Ice(Ice const &copy) : AMateria(copy) {
	_xp = 0;
	return;
}

Ice::~Ice() {
	return;
}

Ice &Ice::operator=(Ice const &rhs) {
	AMateria::operator=(rhs);
	return (*this);
}

AMateria *Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
