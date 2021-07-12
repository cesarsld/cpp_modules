/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:17:23 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/29 18:24:25 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP
#include "AWeapon.hpp"


class PlasmaRifle: public AWeapon {
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &copy);
		~PlasmaRifle();
		PlasmaRifle	&operator=(PlasmaRifle const &rhs);
		void attack() const;
};

#endif
