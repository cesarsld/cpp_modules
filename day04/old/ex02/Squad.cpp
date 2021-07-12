/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:48:08 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/30 18:43:57 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() {
	count = 0;
	units = NULL;
}

Squad::Squad(Squad const &copy) : count(0), units(NULL) {
	*this = copy;
}

Squad::~Squad() {
	t_unit_list *tmp;

	tmp = units;
	while (tmp) {
		tmp = units->next;
		delete units->marine;
		delete units;
		units = tmp;
	}
}

Squad &Squad::operator=(Squad const &rhs) {
	if (this == &rhs)
		return (*this);

	t_unit_list *tmp;

	tmp = units;
	while (tmp) {
		tmp = units->next;
		delete units->marine;
		delete units;
		units = tmp;
	}
	
	count = 0;

	tmp = rhs.units;
	while (tmp) {
		push(tmp->marine->clone());
		tmp = tmp->next;
	}
	return (*this);
}

int		Squad::getCount() const {
	return (count);
}

ISpaceMarine *Squad::getUnit(int i) const {
	if (i > count - 1 || i < 0)
		return (NULL);

	t_unit_list *tmp;
	tmp = units;
	while (i--) {
		tmp = units->next;
	}
	return (tmp->marine);
}

int Squad::push(ISpaceMarine *marine) {
	if (!marine)
	{
		std::cout << "Marine pointer null" << std::endl;
		return -1;
	}
	if (count == 0) {
		count++;
		units = new t_unit_list;
		units->marine = marine;
		units->next = NULL;
		return count;
	}
	else {
		t_unit_list *tmp;
		tmp = units;
		while (tmp) {
			if (marine == tmp->marine) {
				std::cout << "Marine elements exists already" << std::endl;
				return -1;
			}
			if (tmp->next)
				tmp = tmp->next;
			else
			break;
		}
		tmp->next = new t_unit_list;
		tmp->next->marine = marine;
		tmp->next->next = NULL;
		return (++count);
	}
}
