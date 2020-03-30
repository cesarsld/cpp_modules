/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 11:42:37 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/30 12:05:47 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon():
type("")
{}

Weapon::Weapon(std::string const &_type)
{
	type = _type;
}

std::string const &Weapon::getType() const
{
	return (type);
}

void Weapon::setType(std::string const &_type)
{
	type = _type;
}