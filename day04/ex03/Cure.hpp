/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 19:38:34 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/30 19:38:54 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(Cure const &copy);
		~Cure();
		Cure &operator=(Cure const &rhs);
		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif
