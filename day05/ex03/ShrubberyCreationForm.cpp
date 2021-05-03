/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 19:14:10 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/03 20:57:24 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	Form("shrubbery creation", 145, 137, target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) {
	*this = copy;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	return;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	std::string t = rhs.getName();
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	Form::execute(executor);
	
	std::ofstream	newFs;
	std::string		fileName = this->getTarget() + "_shrubbery";	

	newFs.open(fileName.c_str());
	if (!(newFs.good()))
	{
		std::cout << "There has been an error opening the file " << fileName << std::endl;
		return;
	}
	newFs << "               ,@@@@@@@," << std::endl;
	newFs << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	newFs << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	newFs << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	newFs << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	newFs << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	newFs << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	newFs << "       |o|        | |         | |" << std::endl;
	newFs << "       |.|        | |         | |" << std::endl;
	newFs << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
	newFs.close();
}

ShrubberyCreationForm *ShrubberyCreationForm::clone() const {
	return (new ShrubberyCreationForm(getTarget()));
}
