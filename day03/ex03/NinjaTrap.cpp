/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:29:50 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/26 14:16:51 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string _n) : ClapTrap(){
	std::cout << _n << ": Recompiling my combat code!" <<std::endl;
	name = _n;
	hp = 60;
	maxHp = 60;
	ep = 120;
	maxEp = 120;
	lvl = 1;
	melee = 60;
	ranged = 5;
	armor = 0;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << name << ": Why do I even feel pain?!" <<std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap const &target) {
	std::cout << name << "attack pathetic Clap pleb " << target.getName() <<std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const &target) {
	std::cout << name << "attack pathetic Frag pleb " << target.getName() <<std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const &target) {
	std::cout << name << "attack pathetic Scav pleb " << target.getName() <<std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const &target) {
	std::cout << name << "attack pathetic Ninja pleb " << target.getName() <<std::endl;
}