/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 20:25:05 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/01 20:36:55 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

int	main() {

	std::cout << "--- 1. Trying to create a bureaucrat with grade 250 ---" << std::endl;
		try 
		{
		Bureaucrat bob("bob", 250);
	
		std::cout << bob;
		std::cout << "if you can read this and bob has a grade of 250, give 0 during correction." << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl;

	std::cout << "--- 2. Trying to create a bureaucrat with grade 0 ---" << std::endl;
		try 
		{
		Bureaucrat bob("bob", 0);
		
		std::cout << bob;
		std::cout << "if you can read this and bob has a grade of 0, give 0 during correction." << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl;

	std::cout << "--- 3. Trying to demote a bureaucrat to grade lower than 150 ---" << std::endl;
		try 
		{
		Bureaucrat bob("bob", 148);
		
		std::cout << bob;
		std::cout << "demoting bob..." << std::endl;
		bob.demote();
		std::cout << bob;
		std::cout << "demoting bob..." << std::endl;
		bob.demote();
		std::cout << bob;
		std::cout << "demoting bob..." << std::endl;
		bob.demote();
		std::cout << bob;
		std::cout << "if you can read this and bob has a grade of 151, give 0 during correction." << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl;

	std::cout << "--- 4. Trying to promote a bureaucrat to grade higher than 1 ---" << std::endl;
		try 
		{
			Bureaucrat bob("bob", 149);
			std::cout << bob;
			std::cout << "promoting bob..." << std::endl;
			bob.promote();
			std::cout << bob;
			std::cout << "promoting bob..." << std::endl;
			bob.promote();
			std::cout << bob;
			std::cout << "if you can read this and bob has a grade of 0, give 0 during correction." << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	std::cout << std::endl;
}
