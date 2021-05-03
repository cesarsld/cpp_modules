/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 19:58:13 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/03 18:24:35 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &_name, int _grade) {
	name = _name;
	if (_grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if (_grade > 150)
		throw Bureaucrat::GradeTooHighException();
	grade = _grade;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) {
	*this = copy;
}

Bureaucrat::~Bureaucrat() {
	return;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
	grade = rhs.grade;
	return (*this);
}

std::string Bureaucrat::getName() const {
	return (name);
}

int Bureaucrat::getGrade() const {
	return (grade);
}

void Bureaucrat::demote() {
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		grade++;
}

void Bureaucrat::promote() {
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooLowException();
	else
		grade--;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade over 150.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade under 1.");
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &crat) {
	o << crat.getName() << ", bureaucrat grade " << crat.getGrade() << std::endl;
	return o;
}
