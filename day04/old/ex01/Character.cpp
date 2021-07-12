/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:47:33 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/30 16:33:16 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &_name) {
	name = _name;
	ap = 40;
	weapon = NULL;
}

Character::Character(Character const &copy) {
	*this = copy;
}

Character::~Character() {
	
}

Character &Character::operator=(Character const &rhs) {
	name = rhs.name;
	ap = rhs.ap;
	weapon = rhs.weapon;
	return (*this);
}

void Character::recoverAP() {
	ap += 10;
	if (ap > 40)
		ap = 40;
}

void Character::equip(AWeapon *_weapon) {
	weapon = _weapon;
}

void Character::attack(Enemy *enemy) {
	if (!weapon)
		return;
	if (!enemy)
		return;
	if(ap < weapon->getAPCost())
		return;
	ap -= weapon->getAPCost();
	std::cout << name << " attacks " << enemy->getType() << " with a " << weapon->getName() << std::endl;
	enemy->takeDamage(weapon->getDamage());
	if (enemy->getHP() == 0)
		delete enemy;
}

std::string Character::getName() const {
	return name;
}

int Character::getAp() const {
	return ap;
}

AWeapon *Character::getWeapon() const {
	return weapon;
}

std::ostream &operator<<(std::ostream &o, Character const &_char) {
	if (!_char.getWeapon())
		o << _char.getName() << " has " << _char.getAp() << " ap and is unarmed" << std::endl;
	else
		o << _char.getName() << " has " << _char.getAp() << " ap and wields a " << _char.getWeapon()->getName() << std::endl;
	return o;
}
