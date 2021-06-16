/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 20:02:52 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/16 12:37:04 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
	return;
}

Human::Human(int _iq):
brain(Brain(_iq))
{}

Human::~Human() {
	return;
}

void	Human::myIq()
{
	std::cout << "My IQ is " << getBrain().getIq() << std::endl;
}

const Brain	&Human::getBrain() const
{
	return (brain);
}

std::string	Human::identify() const
{
	return (brain.identify());
}
