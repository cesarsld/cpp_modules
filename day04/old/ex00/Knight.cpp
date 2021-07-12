/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Knight.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:52:20 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/08 17:03:08 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Knight.hpp"

Knight::Knight(std::string const _name) : Victim(_name) {
	std::cout << "I shall protect my lord!" << std::endl;
}

Knight::Knight(Knight const &copy) : Victim(copy) {
	std::cout << "I shall protect my lord!" << std::endl;
}

Knight::~Knight() {
	std::cout << "To the kingdom..." << std::endl;
}

Knight		&Knight::operator=(Knight const &rhs) {
	Victim::operator=(rhs);
	return (*this);
}


void		Knight::getPolymorphed() const {
	std::cout << name << " has been turned into a Red Lizard!" << std::endl;
	return;
}
