/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 19:24:25 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/30 19:25:54 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(Ice const &copy);
		~Ice();
		Ice &operator=(Ice const &rhs);
		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif
