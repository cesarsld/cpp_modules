/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 02:37:39 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/01 03:40:05 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		source[i] = NULL;
	return;
}

MateriaSource::MateriaSource(MateriaSource const &copy) {
	*this = copy;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete source[i];
	return;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {
	int i;
	for (i = 0; i < 4; i++) {
		delete source[i];
		source[i] = NULL;
	}
	for (i = 0; i < 4; i++)
		source[i] = rhs.source[i]->clone();

	return (*this);
}

void MateriaSource::learnMateria(AMateria *m) {
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
		if (!source[i]) {
			source[i] = m;
			return;
		}
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++)
		if (source[i])
			if (source[i]->getType() == type)
				return source[i]->clone();
	return (0);
}
