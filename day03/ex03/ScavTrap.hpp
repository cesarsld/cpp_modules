/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:36:32 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/08 16:15:38 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	protected:
	int scavStats[8];
public:
	ScavTrap();
	ScavTrap(std::string const _n);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const &rhs);
	void attack(std::string const &target);
	void guardGate();
};

#endif
