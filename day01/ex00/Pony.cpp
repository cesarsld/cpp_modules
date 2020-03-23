/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 19:34:39 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/23 19:40:15 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string const _name)
{
	name = _name;
}

void	Pony::run()
{
	std::cout << "Look at me! I, " << name
		<< ", a majestic creature, running like the wind!" << std::endl;
}

void	Pony::talk()
{
	std::cout << "Hello friend! My name is " << name << " and I am fabulous." << std::endl;
}