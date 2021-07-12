/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:03:55 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/08 15:11:45 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Unit-5") {
	std::cout << name << ": I ain't shiny but I got a knife!" <<std::endl;
	hp = 10;
	maxHp = 10;
	ep = 10;
	maxEp = 10;
	ad = 0;
}

ClapTrap::ClapTrap(std::string const _name) {
	name = _name;
	std::cout << name << ": I ain't shiny but I got a knife!" <<std::endl;
	hp = 10;
	maxHp = 10;
	ep = 10;
	maxEp = 10;
	ad = 0;
}

ClapTrap::ClapTrap(ClapTrap const &copy) : name("Basic CLP-TP Unit") {
	std::cout << " _-_-- Claptrap data duplication program engaged... pip pup puuup pip... --_-_" << std::endl;
	*this = copy;
	return;
}

ClapTrap::~ClapTrap() {
	std::cout  << name << ": Destroying CLP-TP boring shell... *pouf*" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) {
	std::cout << "Copying " << rhs.name << "'s data into " << name << std::endl;
	name = rhs.name;
	hp = rhs.hp;
	maxHp = rhs.maxHp;
	ep = rhs.ep;
	maxEp = rhs.maxEp;
	ad = rhs.ad;
	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap <" << name << "> hit " << target << " for " << ad << " damage" << std::endl;
}


void ClapTrap::takeDamage(unsigned const amount)
{
	std::cout << name << " took " << amount << " dmg" << std::endl;
	hp -= amount;
	hp = hp < 0 ? 0 : hp;
}

void ClapTrap::beRepaired(unsigned const amount)
{
	std::cout << name << " was healed for " << amount << std::endl;
	hp += amount;
	if (hp > maxHp)
		hp = maxHp;
	std::cout << "Current HP is " << hp << std::endl;
}
