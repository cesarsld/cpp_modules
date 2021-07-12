/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:36:28 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/22 13:45:40 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
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

ScavTrap::ScavTrap(std::string _n) : ClapTrap() {
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
	ClapTrap::operator=(rhs);
	return (*this);
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
