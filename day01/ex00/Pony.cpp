/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 19:34:39 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/09 09:17:47 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string const _name, bool maj)
{
	name = _name;
	majestic = maj;
}

void	Pony::run()
{
	std::cout << "Look at me! I, " << name
		<< ", a nice creature, running like the wind!" << std::endl;
}

void	Pony::talk()
{
	std::cout << "Hello friend! My name is " << name << " and I am fabulous." << std::endl;
}

void	Pony::amIMajestic()
{
	if (majestic)
		std::cout << "I am fucking majectic." << std::endl;
	else
		std::cout << "I am a failure to horsekind." << std::endl;
}
