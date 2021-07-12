/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:03:55 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/22 14:16:53 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Unit-5") {
	std::cout << name << ": I ain't shiny but I got a knife!" <<std::endl;
	hp = 10;
	maxHp = 10;
	ep = 10;
	maxEp = 10;
	lvl = 1;
	melee = 3;
	ranged = 2;
	armor = 0;
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
	lvl = rhs.lvl;
	melee = rhs.melee;
	ranged = rhs.ranged;
	armor = rhs.armor;
	return (*this);
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << name << " headshot " << target << " for " << ranged << " damage" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << name << " punched " << target << " for " << melee << " damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned const amount)
{
	hp -= amount * (100 - armor) / 100;
	hp = hp < 0 ? 0 : hp;
	std::cout << name << " took " << amount * (100 - armor) / 100 << " dmg" << std::endl;
}

void ClapTrap::beRepaired(unsigned const amount)
{
	std::cout << name << " was healed for " << amount << std::endl;
	hp += amount;
	if (hp > maxHp)
		hp = maxHp;
	std::cout << "Current HP is " << hp << std::endl;
}

std::string	ClapTrap::getName() const {
	return (name);
}
