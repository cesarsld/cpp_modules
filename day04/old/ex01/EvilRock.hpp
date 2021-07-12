/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EvilRock.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 15:56:37 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/30 15:56:51 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVILROCK_HPP
#define EVILROCK_HPP
#include "Enemy.hpp"

class EvilRock : public Enemy {
	public:
		EvilRock();
		~EvilRock();
		EvilRock(EvilRock const &copy);
		EvilRock &operator=(EvilRock const &rhs);
};

#endif
