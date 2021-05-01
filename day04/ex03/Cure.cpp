/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 19:39:11 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/30 19:39:46 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	_xp = 0;
	return;
}

Cure::Cure(Cure const &copy) : AMateria(copy) {
	_xp = 0;
	return;
}

Cure::~Cure() {
	return;
}

Cure &Cure::operator=(Cure const &rhs) {
	AMateria::operator=(rhs);
	return (*this);
}

AMateria *Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target) {
	std::cout << "*  heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}
