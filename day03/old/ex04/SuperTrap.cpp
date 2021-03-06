/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:39:06 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/22 14:03:04 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(), NinjaTrap(), FragTrap() {
	name = "Super Tarp default";
	hp = fragStats[0];
	maxHp = fragStats[1];
	ep = ninjaStats[2];
	maxEp = ninjaStats[3];
	lvl = 1;
	melee = ninjaStats[5];
	ranged = fragStats[6];
	armor = fragStats[7];
	std::cout << name << ": Super man is gone! I'm the new boi in town!" <<std::endl;

}

SuperTrap::SuperTrap(std::string _n) : ClapTrap(), NinjaTrap(), FragTrap(){
	std::cout << _n << ": Super man is gone! I'm the new boi in town!" <<std::endl;
	name = _n;
	hp = fragStats[0];
	maxHp = fragStats[1];
	ep = ninjaStats[2];
	maxEp = ninjaStats[3];
	lvl = 1;
	melee = ninjaStats[5];
	ranged = fragStats[6];
	armor = fragStats[7];
}

SuperTrap::~SuperTrap() {
	std::cout << name << ": Super man is gone! And I'm gone too!" <<std::endl;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &rhs) {
	ClapTrap::operator=(rhs);
	return (*this);
}