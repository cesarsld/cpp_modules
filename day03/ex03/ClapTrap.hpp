/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:58:50 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/08 12:45:08 by cjaimes          ###   ########.fr       */
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
	std::string name;
	int hp;
	int maxHp;
	int ep;
	int maxEp;
	int ad;

public:
	ClapTrap();
	ClapTrap(std::string const name);
	ClapTrap &operator=(ClapTrap const &rhs);
	ClapTrap(ClapTrap const &copy);
	~ClapTrap();
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
