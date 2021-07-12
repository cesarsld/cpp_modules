/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:46:26 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/08 16:42:50 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include "Victim.hpp"

class Sorcerer {
	private:
		std::string name;
		std::string title;
		Sorcerer();

	public:
		Sorcerer(std::string const _name, std::string const _title);
		Sorcerer(Sorcerer const &copy);
		Sorcerer &operator=(Sorcerer const &rhs);
		~Sorcerer();
		std::string greet() const;
		void polymorph(Victim const &v) const;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif
