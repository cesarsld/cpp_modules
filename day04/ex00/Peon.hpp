/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:50:20 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/26 22:01:57 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include "Victim.hpp"

class Peon : public Victim {

	public:
		Peon(std::string const _name);
		~Peon();
		void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &o, Victim const &rhs);

#endif
