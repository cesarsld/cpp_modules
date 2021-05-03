/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 19:51:58 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/03 20:13:45 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class Bureaucreat;

class RobotomyRequestForm : public Form {
	private:
		RobotomyRequestForm();

	public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
		void execute(Bureaucrat const &executor) const;
		RobotomyRequestForm *clone() const;

};

#endif
