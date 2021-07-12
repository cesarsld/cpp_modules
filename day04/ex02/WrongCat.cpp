/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 21:48:01 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/10 01:51:47 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy) {
	type = copy.type;
	type = "WrongCat";
}

WrongCat::~WrongCat() {
	
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
	type = rhs.type;
	type = "WrongCat";
	return *this;
}
