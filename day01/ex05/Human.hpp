/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 19:59:07 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/16 12:34:03 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP
#include "Brain.hpp"

class Human
{
	private:
	const Brain brain;

	public:
	Human();
	Human(int _iq);
	~Human();
	std::string identify() const;
	const Brain	&getBrain() const;
	void		myIq();
};

#endif
