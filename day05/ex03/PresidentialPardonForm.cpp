/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 19:56:49 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/03 21:02:17 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <cstdlib>

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
	Form("presidential pardon", 25, 2, target)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) {
	*this = copy;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	std::string t = rhs.getName();
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	Form::execute(executor);

	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm *PresidentialPardonForm::clone() const {
	return (new PresidentialPardonForm(getTarget()));
}
