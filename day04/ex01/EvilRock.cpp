/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EvilRock.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 15:57:01 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/30 16:33:28 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EvilRock.hpp"

EvilRock::EvilRock() : Enemy(80, "Evil Rock") {
	std::cout << "* ... *" << std::endl;
}

EvilRock::EvilRock(EvilRock const &copy) : Enemy(copy){
	std::cout << "* ... *" << std::endl;
}

EvilRock	&EvilRock::operator=(EvilRock const &rhs) {
	Enemy::operator=(rhs);
	return (*this);
}

EvilRock::~EvilRock() {
	std::cout << "* CRACK *" << std::endl;
}
