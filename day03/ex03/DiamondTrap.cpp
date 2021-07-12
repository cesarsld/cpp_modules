/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:39:06 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/22 14:03:04 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Super Tarp default_clap_name"), ScavTrap(), FragTrap() {
	dName = "Super Tarp default";
	hp = fragstats[0];
	maxHp = fragstats[0];
	ep = scavStats[1];
	maxEp = scavStats[1];
	ad = fragstats[2];
	std::cout << dName << ": Super man is gone! I'm the new boi in town!" <<std::endl;

}

DiamondTrap::DiamondTrap(std::string _n) : ClapTrap(_n + "_clap_name"), ScavTrap(_n + "_clap_name"), FragTrap(_n + "_clap_name"){
	std::cout << _n << ": Super man is gone! I'm the new boi in town!" <<std::endl;
	dName = _n;
	hp = fragstats[0];
	maxHp = fragstats[0];
	ep = scavStats[1];
	maxEp = scavStats[1];
	ad = fragstats[2];
}

DiamondTrap::~DiamondTrap() {
	std::cout << dName << ": Super man is gone! And I'm gone too!" <<std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs) {
	ClapTrap::operator=(rhs);
	return (*this);
}

void DiamondTrap::attack(std::string const &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "My names are: " << dName << " and " << name <<std::endl;

}
