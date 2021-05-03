/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 18:40:33 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/03 19:51:52 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class Bureaucreat;

class ShrubberyCreationForm : public Form {
	private:
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
		void execute(Bureaucrat const &executor) const;
};

#endif
