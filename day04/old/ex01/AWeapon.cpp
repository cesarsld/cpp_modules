/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:11:14 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/29 18:23:49 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &_name, int _ap, int _dmg){
	name = _name;
	ap = _ap;
	dmg = _dmg;
	return;
}

AWeapon::AWeapon(AWeapon const &copy) {
	*this = copy;
	return;
}

AWeapon::~AWeapon() {
	return;
}

AWeapon	&AWeapon::operator=(AWeapon const &rhs) {
	name = rhs.name;
	ap = rhs.ap;
	dmg = rhs.dmg;
	return (*this);
}

std::string AWeapon::getName() const {
	return name;
}

int AWeapon::getAPCost() const {
	return ap;
}

int AWeapon::getDamage() const {
	return dmg;
}
