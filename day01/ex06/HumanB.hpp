/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 11:49:00 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/16 12:44:30 by cjaimes          ###   ########.fr       */
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
	HumanB(std::string const &_name);
	~HumanB();
	void setWeapon(Weapon &_wp);
	void attack();
};

#endif
