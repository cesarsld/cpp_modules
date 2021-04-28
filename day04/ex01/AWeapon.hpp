/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 22:34:01 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/26 22:37:19 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <string>
#include <iostream>
#include <cstdlib>


class AWeapon {
	protected:
		std::string name;
		int ap;
		int dmg;

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		~AWeapon();
		std::string getName() const;
		int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;
};

#endif