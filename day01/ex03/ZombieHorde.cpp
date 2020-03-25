/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 17:34:34 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/25 18:10:02 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int _n)
{
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