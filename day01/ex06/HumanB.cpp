/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 11:52:12 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/30 12:21:18 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const &_name):
name(_name)
{
	weapon = 0;
}

void HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with his " << weapon->getType() << std::endl;
	else
		std::cout << name << " can't attack. He has no weapon!" << std::endl;
}

void HumanB::setWeapon(Weapon &_wp)
{
	weapon = &_wp;
}