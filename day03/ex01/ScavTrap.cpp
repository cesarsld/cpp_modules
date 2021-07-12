/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:36:28 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/09 13:37:29 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	hp = 100;
	maxHp = 100;
	ep = 50;
	maxEp = 50;
	ad = 20;
	std::cout << "[" << name << "]: ScavTrap in da place! Please don't hit me, thank you." << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string _n) : ClapTrap(_n) {
	std::cout << _n << ": Yoo hoooooooooo!" <<std::endl;
	name = _n;
	hp = 100;
	maxHp = 100;
	ep = 50;
	maxEp = 50;
	ad = 20;
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

void ScavTrap::attack(std::string const &target) {
	std::cout << "Scavtrap <" << name << "> hit " << target << " for " << ad << " damage" << std::endl;

}

void ScavTrap::guardGate()
{
	std::cout << "SC4V-TP " << name << " has entered Gate keeper mode!" << std::endl;
	return;
}
