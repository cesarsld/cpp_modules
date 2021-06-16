/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 11:38:09 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/16 12:41:49 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>
#include <iostream>

class Weapon
{
	private:
	std::string type;

	public:
	Weapon();
	Weapon(std::string const &_type);
	~Weapon();
	std::string const &getType() const;
	void setType(std::string const &_type);
};

#endif
