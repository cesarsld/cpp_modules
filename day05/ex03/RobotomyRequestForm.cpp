/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 19:52:25 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/03 20:57:17 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
	Form("robotomy request", 72, 45, target)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) {
	*this = copy;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	return;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	std::string t = rhs.getName();
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	Form::execute(executor);

	std::cout << "** Drilling noises * ... ";
	if (rand() % 2)
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->getTarget() << " has not been robotomized because of a failure... Oups?" << std::endl;
}

RobotomyRequestForm *RobotomyRequestForm::clone() const {
	return (new RobotomyRequestForm(getTarget()));
}
