/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:58:50 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/22 13:37:36 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>
#include <iostream>
#include <cstdlib>

class ClapTrap
{
protected:
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
	ClapTrap();
	ClapTrap &operator=(ClapTrap const &rhs);
	ClapTrap(ClapTrap const &copy);
	~ClapTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
