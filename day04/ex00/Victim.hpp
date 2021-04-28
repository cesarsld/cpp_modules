/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:26:00 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/26 22:03:04 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <string>
#include <iostream>
#include <cstdlib>

class Victim {
	protected:
		std::string name;

	public:
		Victim(std::string const _name);
		~Victim();
		std::string greet() const;
		virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &o, Victim const &rhs);

#endif
