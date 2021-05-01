/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MightySpoon.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 15:55:06 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/30 15:55:24 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIGHTYSPOON_HPP
#define MIGHTYSPOON_HPP
#include "AWeapon.hpp"


class MightySpoon: public AWeapon {
	public:
		MightySpoon();
		MightySpoon(MightySpoon const &copy);
		~MightySpoon();
		MightySpoon	&operator=(MightySpoon const &rhs);
		void attack() const;
};

#endif
