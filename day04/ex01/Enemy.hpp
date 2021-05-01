/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:38:18 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/29 18:24:12 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class Enemy {
	protected:
		std::string type;
		int hp;
		Enemy();
		
	public:
		Enemy(int _hp, std::string const &_type);
		Enemy(Enemy const &copy);
		virtual ~Enemy();
		Enemy	&operator=(Enemy const &rhs);
		std::string getType() const;
		int getHP() const;

		virtual void takeDamage(int);
};

#endif

