/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:36:32 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/22 13:36:15 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <string>
#include <iostream>
#include <cstdlib>

class ScavTrap
{
private:
	int hp;
	int maxHp;
	int ep;
	int maxEp;
	int lvl;
	std::string name;
	int melee;
	int ranged;
	int armor;
public:
	ScavTrap();
	ScavTrap(std::string const _n);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const &rhs);
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const &target);
};

#endif
