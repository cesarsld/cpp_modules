/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:50:58 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/29 18:24:37 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &copy) : Enemy(copy){
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &rhs) {
	Enemy::operator=(rhs);
	return (*this);
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int amount) {
	if (amount > 3)
		Enemy::takeDamage(amount - 3);
}
