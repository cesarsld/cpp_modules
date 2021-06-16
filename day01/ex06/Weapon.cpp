/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 11:42:37 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/16 12:41:47 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("") {
	return;
}

Weapon::Weapon(std::string const &_type)
{
	type = _type;
}

Weapon::~Weapon() {
	return;
}

std::string const &Weapon::getType() const {
	return (type);
}

void Weapon::setType(std::string const &_type) {
	type = _type;
}
