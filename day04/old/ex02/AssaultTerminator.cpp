/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 17:31:25 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/30 18:31:19 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
	return;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &copy) {
	std::cout << "* teleports from space *" << std::endl;
	*this = copy;
}

AssaultTerminator::~AssaultTerminator() {
		std::cout << "I'll be back" << std::endl;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &rhs) {
	if (this == &rhs)
		return (*this);
	return (*this);
}

ISpaceMarine	*AssaultTerminator::clone() const {
	return (new AssaultTerminator(*this));
}
void			AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void			AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}
