/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:35:20 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/08 15:18:46 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int	main() {
	// setting random seed (different every second)
	srand(time(0));

	FragTrap frag("Frank");
	ScavTrap scav("Tony");

	std::cout << std::endl;
	std::cout << "--- Test takeDamage ---" << std::endl;
	frag.takeDamage(50);
	frag.takeDamage(70);
	scav.takeDamage(10);
	scav.takeDamage(2000);
	std::cout << std::endl;

	std::cout << "--- Test beRepaired ---" << std::endl;
	frag.beRepaired(20);
	frag.beRepaired(200);
	scav.beRepaired(99);
	scav.beRepaired(1000);
	std::cout << std::endl;

	std::cout << "--- Test attack functions ---" << std::endl;
	frag.attack("Rambo");
	scav.attack("Dumbo");
	frag.attack("Bobby");
	scav.attack("Aang");
	std::cout << std::endl;

	std::cout << "--- Test high five ---" << std::endl;
	frag.highFivesGuys();
	std::cout << std::endl;

	std::cout << "--- Test guard ---" << std::endl;
	scav.guardGate();
	std::cout << std::endl;

	std::cout << "--- Destructor messages should be below ---" << std::endl;
	return(0);
}
