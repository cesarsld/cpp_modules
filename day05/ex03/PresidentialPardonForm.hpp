/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 19:56:12 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/03 20:13:38 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class Bureaucreat;

class PresidentialPardonForm : public Form {
	private:
		PresidentialPardonForm();

	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
		void execute(Bureaucrat const &executor) const;
		PresidentialPardonForm *clone() const;

};

#endif
