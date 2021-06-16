/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 19:29:21 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/16 12:33:37 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iomanip>
#include <sstream>

Brain::Brain() : iq(2){
	return;
}

Brain::Brain(int _iq)
{
	iq = _iq;
}

Brain::~Brain() {
	return;
}

std::string Brain::identify() const
{
	std::stringstream strm;
	strm << this;
	return (strm.str());
}

int	Brain::getIq() const
{
	return (iq);
}
