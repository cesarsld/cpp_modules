/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 20:22:38 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/01 03:42:04 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name){
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	return;
}

Character::Character(Character const &copy) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	*this = copy;
	return;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}

Character &Character::operator=(Character const &rhs) {
	int i = 0;
	for (i = 0; i < 4; i++) {
		delete _inventory[i];
		_inventory[i] = NULL;
	}
	for (i = 0; i < 4; i++) {
		if (rhs._inventory[i])
			_inventory[i] = rhs._inventory[i]->clone();
	}
	_name = rhs._name;
	return (*this);
}

std::string const &Character::getName() const {
	return _name;
}

void Character::equip(AMateria *m) {
	if (!m)
		return;
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return;
	if (_inventory[idx])
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3)
		return;
	if (_inventory[idx])
		_inventory[idx]->use(target);
}
