/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:29:50 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/09 13:35:58 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "Hey everybody! " << name << " here! Check out my package! " <<std::endl;
	hp = 100;
	maxHp = 100;
	ep = 100;
	maxEp = 100;
	ad =30;
	fragstats[0] = 100;
	fragstats[1] = 100;
	fragstats[2] = 30;
}


FragTrap::FragTrap(std::string _n) : ClapTrap(_n){
	std::cout << "Hey everybody! " << _n << " here! Check out my package! " <<std::endl;
	name = _n;
	hp = 100;
	maxHp = 100;
	ep = 100;
	maxEp = 100;
	ad = 30;
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

void FragTrap::attack(std::string const &target) {
	std::cout << "Fragtrap <" << name << "> hit " << target << " for " << ad << " damage" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FR4G-TP " << name << " : I request a 1.. a 2... a 3.. a 4.. a HIGH FIVE!!!" << std::endl;
	return;
}
