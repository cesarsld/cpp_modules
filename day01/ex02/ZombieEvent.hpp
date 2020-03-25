/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 10:44:05 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/25 12:32:42 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
	private:
	std::string	type;

	public:
	void			setZombieType(std::string _type);
	Zombie*				newZombie(std::string _name);
	Zombie*				randomChump(void);
};

#endif