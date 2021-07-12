/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:28:19 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/29 18:24:31 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP
#include "AWeapon.hpp"


class PowerFist: public AWeapon {
	public:
		PowerFist();
		PowerFist(PowerFist const &copy);
		~PowerFist();
		PowerFist	&operator=(PowerFist const &rhs);
		void attack() const;
};

#endif
