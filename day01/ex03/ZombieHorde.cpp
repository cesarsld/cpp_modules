/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 17:34:34 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/16 12:17:56 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde() {
	return;
}

ZombieHorde::ZombieHorde(int _n)
{
	if (_n < 0) {
		std::cout << "negative number, default to 5" << std::endl;
		_n = 5;
	}
	zombies = new Zombie[_n];
	n = _n;
	for (int i = 0; i < n; i++)
	{
		zombies[i].setZombieStats(Zombie::randomName(10), "Horde");
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] zombies;
	std::cout << "Zombies deleted" << std::endl;
}

void ZombieHorde::announce()
{
	for (int i = 0; i < n; i++)
		zombies[i].announce();
}
