/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 10:57:02 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/16 11:32:20 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiinnnnsss" << std::endl;
}

Zombie::Zombie(std::string _name, std::string _type)
{
	name = _name;
	type = _type;
}

Zombie::Zombie() : name("Bob"), type("default")
{
	return;
}

Zombie::~Zombie()
{
	std::cout << "<" << name << "> Me ded bye bye" << std::endl;
}

std::string	Zombie::randomName(int length)
{
	static const std::string alphanum = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	std::string str;
	
	for (int i = 0; i < length; i++)
        str += alphanum.substr(rand() % (alphanum.size() - 1), 1);
	return str;
}

void	Zombie::setZombieStats(std::string const _name, std::string const _type)
{
	name = _name;
	type = _type;
}
