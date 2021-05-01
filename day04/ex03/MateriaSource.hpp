/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 20:58:52 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/01 03:30:57 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria *source[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &copy);
		virtual ~MateriaSource();
		MateriaSource &operator=(MateriaSource const &rhs);
		void learnMateria(AMateria*);
		AMateria *createMateria(std::string const &type);
};

#endif
