/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:37:59 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/30 18:33:02 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include "ISquad.hpp"

typedef struct			s_unit_list {
	ISpaceMarine		*marine;
	struct s_unit_list	*next;
}						t_unit_list;

class Squad : public ISquad {
	private:
		int count;
		t_unit_list *units;

	public:
		Squad();
		Squad(Squad const &copy);
		virtual ~Squad();
		Squad &operator=(Squad const &rhs);
		
		int getCount() const;
		ISpaceMarine *getUnit(int) const;
		int push(ISpaceMarine*);
};

#endif
