/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 20:25:05 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/03 18:10:08 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

int	main() {

	std::cout << "--- 1. Trying to create a form with sign grade 0 ---" << std::endl;
		try 
		{
		Form a("a", 0, 1);
	
		std::cout << a;
		std::cout << "if you can read this, give 0 during correction." << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl;

	std::cout << "--- 2. Trying to create a form with exec grade 151 ---" << std::endl;
		try 
		{
		Form a("a", 1, 151);
	
		std::cout << a;
		std::cout << "if you can read this, give 0 during correction." << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl;

	std::cout << "--- 3. Creating a valid Form and describing it ---" << std::endl;
		Form coolForm("the cool form", 10, 50);
		std::cout << coolForm;
	std::cout << std::endl;

	std::cout << "--- 4. Creating a valid Bureaucrat and describing it ---" << std::endl;
		Bureaucrat bob("Bobby", 14);
		std::cout << bob;
	std::cout << std::endl;

	std::cout << "--- 5. Bobby tries to sign a form too high for him ---" << std::endl;
		bob.signForm(coolForm);
		std::cout << bob;
		std::cout << coolForm;
	std::cout << std::endl;

	std::cout << "--- 5. Bobby gets a couple promotion and tries again ---" << std::endl;
		bob.promote();
		std::cout << bob;
		bob.promote();
		std::cout << bob;
		bob.promote();
		std::cout << bob;
		bob.promote();
		std::cout << bob;
		bob.signForm(coolForm);
		std::cout << coolForm;
	std::cout << std::endl;

}
