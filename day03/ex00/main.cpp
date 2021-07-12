/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:35:20 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/08 12:46:04 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int	main() {
	// setting random seed (different every second)
	srand(time(0));

	ClapTrap clappy("Mike");

	std::cout << std::endl;
	std::cout << "--- Test takeDamage ---" << std::endl;
	clappy.takeDamage(50);
	clappy.takeDamage(70);
	std::cout << std::endl;
	std::cout << "--- Test beRepaired ---" << std::endl;
	clappy.beRepaired(20);
	clappy.beRepaired(200);
	std::cout << std::endl;
	std::cout << "--- Test attack functions ---" << std::endl;
	clappy.attack("John");
	clappy.attack("Wick");
	std::cout << std::endl;

	std::cout << "--- Destructor messages should be below ---" << std::endl;
	return(0);
}
