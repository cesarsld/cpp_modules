/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:29:50 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/22 14:05:39 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "Hey everybody! " << name << " here! Check out my package! " <<std::endl;
	fragStats[0] = hp = 100;
	fragStats[1] = maxHp = 100;
	fragStats[2] = ep = 100;
	fragStats[3] = maxEp = 100;
	fragStats[4] = lvl = 1;
	fragStats[5] = melee = 30;
	fragStats[6] = ranged = 20;
	fragStats[7] = armor = 5;
}


FragTrap::FragTrap(std::string _n) : ClapTrap(){
	std::cout << "Hey everybody! " << _n << " here! Check out my package! " <<std::endl;
	name = _n;
	fragStats[0] = hp = 100;
	fragStats[1] = maxHp = 100;
	fragStats[2] = ep = 100;
	fragStats[3] = maxEp = 100;
	fragStats[4] = lvl = 1;
	fragStats[5] = melee = 30;
	fragStats[6] = ranged = 20;
	fragStats[7] = armor = 5;
}

FragTrap::FragTrap(FragTrap const &copy) {
	std::cout << " _-_-- Fragtrap data duplication program engaged... pip pup puuup pip... --_-_" << std::endl;
	*this = copy;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << name << ": Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!" <<std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {
	ClapTrap::operator=(rhs);
	return (*this);
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (ep < 25)
	{
		std::cout << name << " doesn't have enough energy to perform special attack" << std::endl;
		return;
	}

	std::string attackPool[5] = {
								" counted to infinity. Twice. ",
								" is inevitable. Just like the punch on your face ",
								" hurt your feelings",
								" Performed the Wuxi finger hold",
								" Started singing and making your ears bleed"
								};
	ep -= 25;
	std::cout << "FR4G-TP " << name << attackPool[rand() % 5] << target;
	std::cout << " for 25 EP (" << ep << " EP left)" << std::endl;
	return;
}
