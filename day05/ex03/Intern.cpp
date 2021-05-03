/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 20:06:43 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/03 21:03:27 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	return;
}

Intern::Intern(Intern const &copy) {
	*this = copy;
	return;
}

Intern::~Intern() {
	return;
}

Intern		&Intern::operator=(Intern const &rhs) {
	if (this == &rhs)
		return (*this);
	return (*this);
}

Form *Intern::makeForm(std::string const &formName, std::string const &target) const {
	ShrubberyCreationForm shrub(target);
	RobotomyRequestForm robot(target);
	PresidentialPardonForm pres(target);

	Form *formArray[] = {&shrub, &robot, &pres};
	for (int i = 0 ; i < 3 ; i ++) {
		if (formName == formArray[i]->getName())
			return formArray[i]->clone();
	}
	std::cout << "Error: Intern doesn't recognize this form." << std::endl;
	return (NULL);
}
