/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:15:17 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/18 16:35:54 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <string>
#include <iostream>
#include <cstdlib>

class FragTrap
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
	FragTrap();
	FragTrap(std::string const _n);
	FragTrap(FragTrap const &copy);
	FragTrap &operator=(FragTrap const &rhs);
	~FragTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const &target);
};

#endif
