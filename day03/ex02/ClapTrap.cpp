/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:03:55 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/13 15:04:47 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
	std::cout << name << " took " << amount * (100 - armor) / 100 << " dmg" << std::endl;
	hp -= amount * (100 - armor) / 100;
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