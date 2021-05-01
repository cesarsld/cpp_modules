/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 19:07:08 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/01 03:01:11 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {
	return;	
}

AMateria::AMateria(AMateria const &copy) {
	*this = copy;
	_type = copy._type;
}

AMateria::~AMateria() { 
	return;
}

AMateria	&AMateria::operator=(AMateria const &rhs) { 
	_xp = rhs._xp;
	return (*this);
}

std::string	 const &AMateria::getType() const {
	return (_type);
}

unsigned int		AMateria::getXP() const {
	return (_xp);
}

void 	AMateria::use(ICharacter &target) {
	std::string n = target.getName();
	if (_xp + 10 > _xp)
		_xp += 10;
	return;
}
