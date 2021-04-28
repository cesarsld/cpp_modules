/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Knight.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:52:20 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/26 22:06:21 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Knight.hpp"

Knight::Knight(std::string const _name) : Victim(_name) {
	std::cout << "I shall protect my lord!" << std::endl;
}

Knight::~Knight() {
	std::cout << "To the kingdom..." << std::endl;
}

void		Knight::getPolymorphed() const {
	std::cout << name << " has been turned into a Red Lizard!" << std::endl;
	return;
}
