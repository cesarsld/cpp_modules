/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:38:55 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/29 18:34:08 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion : public Enemy {
	public:
		RadScorpion();
		~RadScorpion();
		RadScorpion(RadScorpion const &copy);
		RadScorpion &operator=(RadScorpion const &rhs);
};

#endif
