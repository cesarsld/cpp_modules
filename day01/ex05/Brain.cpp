/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 19:29:21 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/25 20:21:59 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iomanip>
#include <sstream>

std::string Brain::identify() const
{
	uint64_t address = (uint64_t)this;
	std::stringstream strm;
	strm << "0x" << std::hex << address;
	return (strm.str());
}

int	Brain::getIq() const
{
	return (iq);
}

Brain::Brain(int _iq)
{
	iq = _iq;
}