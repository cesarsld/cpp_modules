/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:35:20 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/09 13:46:52 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int	main() {
	// setting random seed (different every second)
	srand(time(0));

	DiamondTrap dia("Greg");

	std::cout << std::endl;
	std::cout << "--- Test takeDamage ---" << std::endl;
	dia.takeDamage(50);
	dia.takeDamage(70);
	dia.takeDamage(2000);
	std::cout << std::endl;

	std::cout << "--- Test beRepaired ---" << std::endl;
	dia.beRepaired(20);
	dia.beRepaired(99);
	std::cout << std::endl;

	std::cout << "--- Test attack functions ---" << std::endl;
	dia.ScavTrap::attack("Rambo");
	dia.ScavTrap::attack("Dumbo");
	dia.ScavTrap::attack("Bobby");
	std::cout << std::endl;

	std::cout << "--- Test high five ---" << std::endl;
	dia.highFivesGuys();
	std::cout << std::endl;

	std::cout << "--- Test guard ---" << std::endl;
	dia.guardGate();
	std::cout << std::endl;

	dia.whoAmI();
	std::cout << std::endl;

	std::cout << "--- Destructor messages should be below ---" << std::endl;
	return(0);
}
