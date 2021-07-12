/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:36:28 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/22 13:36:56 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : name("Scavy") {
	hp = 100;
	maxHp = 100;
	ep = 50;
	maxEp = 50;
	lvl = 1;
	melee = 20;
	ranged = 15;
	armor = 3;
	std::cout << "[" << name << "]: ScavTrap in da place! Please don't hit me, thank you." << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string _n) {
	std::cout << _n << ": Yoo hoooooooooo!" <<std::endl;
	name = _n;
	hp = 100;
	maxHp = 100;
	ep = 50;
	maxEp = 50;
	lvl = 1;
	melee = 20;
	ranged = 15;
	armor = 3;
}

ScavTrap::ScavTrap(ScavTrap const &copy) {
	std::cout << " _-_-- ScavTrap data duplication program engaged... pip pup puuup pip... --_-_" << std::endl;
	*this = copy;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << name << ": I can see... the code" <<std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {
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

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << name << " headshot " << target << " for " << ranged << " damage" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << name << " punched " << target << " for " << melee << " damage" << std::endl;
}

void ScavTrap::takeDamage(unsigned const amount)
{
	std::cout << name << " took " << amount * (100 - armor) / 100 << " dmg" << std::endl;
	hp -= amount * (100 - armor) / 100;
	hp = hp < 0 ? 0 : hp;
}

void ScavTrap::beRepaired(unsigned const amount)
{
	std::cout << name << " was healed for " << amount << std::endl;
	hp += amount;
	if (hp > maxHp)
		hp = maxHp;
	std::cout << "Current HP is " << hp << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{

	std::string chall[5] = {
								" to a fight of wet noodles...",
								" to find a needle in a haystack...",
								" To a rock paper scissors fight...",
								" to find the meaning of life...",
								" to find the llast digit of pi"
								};
	std::cout << "SC4V-TP " << name << " has challenged " << target << chall[rand() % 5] << std::endl;
	return;
}
