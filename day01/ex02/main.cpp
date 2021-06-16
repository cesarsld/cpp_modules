/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 12:23:44 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/16 11:32:17 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void zombiesOnStack()
{
	Zombie cGroup[5];
	Zombie dGroup[5];


	std::cout << "\n\n Stack Experiment\n" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::string name = "Mike";
		name += i + '0';
		cGroup[i].setZombieStats(name, "Stacker");
		cGroup[i].announce();
		name = "Jason";
		name += i + '0';
		dGroup[i].setZombieStats(name, "Stacker2");
		dGroup[i].announce();
	}
}

int main()
{
	Zombie *aGroup[5];
	Zombie *bGroup[5];
	ZombieEvent stinkies;
	ZombieEvent	rotten;

	rotten.setZombieType("Rotten");
	stinkies.setZombieType("Stinkies");
	for (int i = 0; i < 5; i++)
	{
		aGroup[i] = stinkies.randomChump();
		aGroup[i]->announce();
		bGroup[i] = rotten.randomChump();
		bGroup[i]->announce();
	}
	zombiesOnStack();
	for (int i = 0; i < 5; i++)
	{
		delete aGroup[i];
		delete bGroup[i];
	}
}
