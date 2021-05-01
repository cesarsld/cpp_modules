/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MightySpoon.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 15:55:34 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/30 15:56:23 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MightySpoon.hpp"

MightySpoon::MightySpoon() : AWeapon("Mighty Spoon", 5, 15){
}

MightySpoon::MightySpoon(MightySpoon const &copy) : AWeapon(copy) {
}

MightySpoon::~MightySpoon() {
	return;
}

MightySpoon	&MightySpoon::operator=(MightySpoon const &rhs) {
	AWeapon::operator=(rhs);
	return (*this);
}

void MightySpoon::attack() const {
	std::cout << "* pft pft pft *" << std::endl;	
}
