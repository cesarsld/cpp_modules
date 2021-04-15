/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:36:28 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/13 14:49:21 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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

ScavTrap::~ScavTrap()
{
	std::cout << name << ": I can see... the code" <<std::endl;
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
