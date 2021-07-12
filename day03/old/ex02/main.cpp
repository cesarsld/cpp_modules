/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:35:20 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/26 13:38:49 by cjaimes          ###   ########.fr       */
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
	frag.meleeAttack("Rambo");
	scav.meleeAttack("Dumbo");
	frag.rangedAttack("Bobby");
	scav.rangedAttack("Aang");
	std::cout << std::endl;

	std::cout << "--- Test vaulthunter_dot_exe ---" << std::endl;
	for (int i = 0 ; i < 6 ; i++) {
		frag.vaulthunter_dot_exe("Jeff");
	}
	std::cout << std::endl;

	std::cout << "--- Test challengeNewcomer ---" << std::endl;
	for (int i = 0 ; i < 6 ; i++) {
		scav.challengeNewcomer("Boop");
	}
	std::cout << std::endl;

	std::cout << "--- Destructor messages should be below ---" << std::endl;
	return(0);
}
