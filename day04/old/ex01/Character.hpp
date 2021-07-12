/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:40:51 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/29 18:48:42 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
	private:
		std::string name;
		int ap;
		AWeapon *weapon;

		Character();

	public:
		Character(std::string const &name);
		Character(Character const &copy);
		virtual ~Character();
		Character	&operator=(Character const &rhs);
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string getName() const;
		int getAp() const;
		AWeapon *getWeapon() const;
		
};

std::ostream &operator<<(std::ostream &o, Character const &_char);

#endif
