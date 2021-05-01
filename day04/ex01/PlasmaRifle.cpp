/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:19:11 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/29 18:24:23 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle ", 5, 21){
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy) : AWeapon(copy) {
}

PlasmaRifle::~PlasmaRifle() {
	return;
}

PlasmaRifle	&PlasmaRifle::operator=(PlasmaRifle const &rhs) {
	AWeapon::operator=(rhs);
	return (*this);
}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;	
}
