/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 21:10:46 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/03 20:17:09 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		std::string const name;
		std::string target;
		bool formSign;
		int const gradeToSign;
		int const gradeToExec;

	public:
		Form();
		Form(std::string const &_name, int const g1, int const g2, std::string const &_target);
		Form(Form const &copy);
		virtual ~Form();
		Form &operator=(Form const &rhs);

		std::string const getName() const;
		std::string getTarget() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		bool isSigned() const;
		void beSigned(Bureaucrat const &crat);
		virtual void execute(Bureaucrat const &executor) const = 0;
		virtual Form *clone() const = 0;

		class GradeTooHighException : public std::exception {
			public:
				const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char	*what() const throw();
		};
		
		class FormNotSignedException : public std::exception {
			public:
				const char	*what() const throw(); 
		};
};

std::ostream &operator<<(std::ostream &o, Form const &form);


#endif
