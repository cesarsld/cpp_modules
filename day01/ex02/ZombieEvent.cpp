/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 11:00:58 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/25 16:35:58 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

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