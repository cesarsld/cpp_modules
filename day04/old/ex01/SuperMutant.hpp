/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 16:48:11 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/29 18:24:39 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include "Enemy.hpp"

class SuperMutant : public Enemy {
	public:
		SuperMutant();
		~SuperMutant();
		SuperMutant(SuperMutant const &copy);
		SuperMutant &operator=(SuperMutant const &rhs);
		void takeDamage(int);
};

#endif
