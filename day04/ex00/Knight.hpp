/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Knight.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:50:20 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/26 22:05:32 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KNIGHT_HPP
#define KNIGHT_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include "Victim.hpp"

class Knight : public Victim {

	public:
		Knight(std::string const _name);
		~Knight();
		void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &o, Victim const &rhs);

#endif
