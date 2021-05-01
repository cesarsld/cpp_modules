/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 18:50:45 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/01 03:08:08 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string _type;
		unsigned int _xp;
		AMateria();

	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &copy);
		virtual ~AMateria();
		AMateria &operator=(AMateria const &rhs);
		
		std::string const &getType() const;
		unsigned int getXP() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif
