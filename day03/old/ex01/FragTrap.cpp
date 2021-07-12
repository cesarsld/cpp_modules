/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:29:50 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/22 13:35:31 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : name("Default Trap"){
	std::cout << "Hey everybody! " << name << " here! Check out my package! " <<std::endl;
	hp = 100;
	maxHp = 100;
	ep = 100;
	maxEp = 100;
	lvl = 1;
	melee = 30;
	ranged = 20;
	armor = 5;
}

FragTrap::FragTrap(std::string _n) {
	std::cout << "Hey everybody! " << _n << " here! Check out my package! " <<std::endl;
	name = _n;
	hp = 100;
	maxHp = 100;
	ep = 100;
	maxEp = 100;
	lvl = 1;
	melee = 30;
	ranged = 20;
	armor = 5;
}

FragTrap::FragTrap(FragTrap const &copy) {
	std::cout << " _-_-- Fragtrap data duplication program engaged... pip pup puuup pip... --_-_" << std::endl;
	*this = copy;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << name << ": Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!" <<std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {
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

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << name << " headshot " << target << " for " << ranged << " damage" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << name << " punched " << target << " for " << melee << " damage" << std::endl;
}

void FragTrap::takeDamage(unsigned const amount)
{
	std::cout << name << " took " << amount * (100 - armor) / 100 << " dmg" << std::endl;
	hp -= amount * (100 - armor) / 100;
	hp = hp < 0 ? 0 : hp;
}

void FragTrap::beRepaired(unsigned const amount)
{
	std::cout << name << " was healed for " << amount << std::endl;
	hp += amount;
	if (hp > maxHp)
		hp = maxHp;
	std::cout << "Current HP is " << hp << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (ep < 25)
	{
		std::cout << name << " doesn't have enough energy to perform special attack" << std::endl;
		return;
	}

	std::string attackPool[5] = {
								" counted to infinity. Twice. ",
								" is inevitable. Just like the punch on your face ",
								" hurt your feelings",
								" Performed the Wuxi finger hold",
								" Started singing and making your ears bleed"
								};
	ep -= 25;
	std::cout << "FR4G-TP " << name << attackPool[rand() % 5] << target;
	std::cout << " for 25 EP (" << ep << " EP left)" << std::endl;
	return;
}
