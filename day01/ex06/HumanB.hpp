/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 11:49:00 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/30 12:19:52 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
	private:
	Weapon *weapon;
	std::string const name;

	public:
	HumanB();
	HumanB(std::string const &_name);
	void setWeapon(Weapon &_wp);
	void attack();
};

#endif