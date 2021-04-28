/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:15:17 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/26 14:16:59 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(std::string const _n);
	~NinjaTrap();
	void ninjaShoebox(ClapTrap const &target);
	void ninjaShoebox(ScavTrap const &target);
	void ninjaShoebox(FragTrap const &target);
	void ninjaShoebox(NinjaTrap const &target);
};

#endif
