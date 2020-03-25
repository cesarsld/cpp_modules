/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 17:31:10 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/25 17:45:30 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class ZombieHorde
{
	private:
	int			n;
	Zombie*	zombies;
	public:
	ZombieHorde(int n);
	~ZombieHorde();
	void announce();
};