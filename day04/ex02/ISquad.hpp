/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:37:59 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/30 18:42:51 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
#define ISQUAD_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include "ISpaceMarine.hpp"

class ISquad {
	public:
		virtual ~ISquad() {}
		virtual int getCount() const = 0;
		virtual ISpaceMarine *getUnit(int) const = 0;
		virtual int push(ISpaceMarine*) = 0;
};



#endif
