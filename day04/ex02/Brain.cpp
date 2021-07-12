/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:29:06 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/10 18:07:29 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
}

Brain::Brain(Brain const &copy) {
	for(int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
}

Brain::~Brain(){
	std::cout << "bren ded" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs) {
	for(int i = 0; i < 100; i++)
		ideas[i] = rhs.ideas[i];
	return *this;
}

std::string Brain::getIdea(int index) const {
	return ideas[index];
}

void Brain::setIdea(int index, std::string const idea) {
	ideas[index] = idea;
}
