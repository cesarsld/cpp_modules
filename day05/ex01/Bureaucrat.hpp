/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 19:43:07 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/01 21:49:29 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		std::string  name;
		int grade;
		Bureaucrat();

	public:
		Bureaucrat(std::string const &_name, int _grade);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const &rhs);

		std::string getName() const;
		int getGrade() const;

		void promote();
		void demote();
		void signForm(Form &form) const;

		class GradeTooHighException : public std::exception {
			public:
				const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char	*what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &crat);

#endif
