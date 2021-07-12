/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:28:17 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/29 18:24:28 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist ", 8, 50){
	return;
}

PowerFist::PowerFist(PowerFist const &copy) : AWeapon(copy) {
	return;
}

PowerFist::~PowerFist() {
	return;
}

PowerFist	&PowerFist::operator=(PowerFist const &rhs) {
	AWeapon::operator=(rhs);
	return (*this);
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;	
}
