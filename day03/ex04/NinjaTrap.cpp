/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:29:50 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/26 15:17:08 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap(){
	name = "BoringNinja";
	std::cout << name << ": Boring ninja :(" <<std::endl;
	ninjaStats[0] = hp = 60;
	ninjaStats[1] = maxHp = 60;
	ninjaStats[2] = ep = 120;
	ninjaStats[3] = maxEp = 120;
	ninjaStats[4] = lvl = 1;
	ninjaStats[5] = melee = 60;
	ninjaStats[6] = ranged = 5;
	ninjaStats[7] = armor = 0;
}

NinjaTrap::NinjaTrap(std::string _n) : ClapTrap(){
	std::cout << _n << ": Recompiling my combat code!" <<std::endl;
	name = _n;
	ninjaStats[0] = hp = 60;
	ninjaStats[1] = maxHp = 60;
	ninjaStats[2] = ep = 120;
	ninjaStats[3] = maxEp = 120;
	ninjaStats[4] = lvl = 1;
	ninjaStats[5] = melee = 60;
	ninjaStats[6] = ranged = 5;
	ninjaStats[7] = armor = 0;
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