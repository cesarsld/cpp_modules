/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 21:25:12 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/03 18:18:02 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &_name, int const g1, int const g2) : 
	name(_name),
	formSign(false),
	gradeToSign(g1),
	gradeToExec(g2)
{
	if (gradeToSign < 1 || gradeToExec < 1)
		throw Form::GradeTooLowException();
	if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooHighException();
}

Form::Form(Form const &copy) :
	name(copy.name),
	formSign(copy.formSign),
	gradeToSign(copy.gradeToSign),
	gradeToExec(copy.gradeToExec)
{
	*this = copy;
}

Form::~Form() {
	return;
}

Form			&Form::operator=(Form const &rhs) {
	formSign = rhs.formSign;
	return (*this);
}

void Form::beSigned(Bureaucrat const &crat) {
	if (crat.getGrade() > gradeToSign)
		throw Form::GradeTooLowException();
	else
		formSign = true;
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade over 150.");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade under 1.");
}

int	Form::getGradeToSign() const {
	return (gradeToSign);
}

int	Form::getGradeToExec() const {
	return (gradeToExec);
}

bool Form::isSigned() const {
	return (formSign);
}

std::string const Form::getName() const {
	return (name);
}

std::ostream &operator<<(std::ostream &o, Form const &form) {
	o << "Form " << form.getName() << " is " << (form.isSigned() ? "signed" : "unsigned");
	o << "\nGrade to sign: " << form.getGradeToSign();
	o << "\nGrade to execute: " << form.getGradeToExec() << std::endl;
	return o;
}
