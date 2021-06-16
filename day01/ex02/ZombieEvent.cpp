/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 11:00:58 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/16 11:28:44 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent() : type("default") {
	srand(time(0));
	return;
}

ZombieEvent::~ZombieEvent() {
	return;
}

void	ZombieEvent::setZombieType(std::string newType)
{
	type = newType;
}

Zombie*	ZombieEvent::newZombie(std::string _name)
{
	Zombie *newZombie = new Zombie(_name, type);
	return newZombie;
}

Zombie*	ZombieEvent::randomChump()
{
	Zombie *random = new Zombie(Zombie::randomName(10), type);
	return (random);
}
