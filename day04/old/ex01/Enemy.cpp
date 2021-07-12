/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:41:45 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/29 18:37:33 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int _hp, std::string const &_type) {
	hp = _hp;
	type = _type;
	return;
}

Enemy::Enemy(Enemy const &copy) {
	*this = copy;
}
Enemy &Enemy::operator=(Enemy const &rhs) {
	hp = rhs.hp;
	type = rhs.type;
	return (*this);
}

Enemy::~Enemy() {
	return;
}

std::string Enemy::getType() const {
	return type;
}

int Enemy::getHP() const {
	return hp;
}

void Enemy::takeDamage(int amount) {
	if (amount == 0)
		return;
	if (amount > hp) {
		hp = 0;
	}
	else
		hp -= amount;
}
