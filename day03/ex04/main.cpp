/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:35:20 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/26 17:28:38 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int	main() {
	// setting random seed (different every second)
	srand(time(0));

	ClapTrap clap;
	FragTrap frag("Frank");
	ScavTrap scav("Tony");
	NinjaTrap ninja("Sasuke");
	SuperTrap	super("Super Trap");

	std::cout << std::endl;
	std::cout << "--- Test takeDamage ---" << std::endl;
	frag.takeDamage(50);
	frag.takeDamage(70);
	scav.takeDamage(10);
	scav.takeDamage(2000);
	ninja.takeDamage(2);
	ninja.takeDamage(40);
	super.takeDamage(20);
	super.takeDamage(200);
	std::cout << std::endl;

	std::cout << "--- Test beRepaired ---" << std::endl;
	frag.beRepaired(20);
	frag.beRepaired(200);
	scav.beRepaired(99);
	scav.beRepaired(1000);
	ninja.beRepaired(10);
	ninja.beRepaired(12);
	super.beRepaired(20);
	super.beRepaired(200);
	std::cout << std::endl;

	std::cout << "--- Test attack functions ---" << std::endl;
	frag.meleeAttack("Rambo");
	scav.meleeAttack("Dumbo");
	frag.rangedAttack("Bobby");
	scav.rangedAttack("Aang");
	ninja.meleeAttack("Glenn");
	ninja.rangedAttack("Patrick");
	super.meleeAttack("Pam");
	super.rangedAttack("Mike");
	std::cout << std::endl;

	std::cout << "--- Test vaulthunter_dot_exe ---" << std::endl;
	for (int i = 0 ; i < 6 ; i++) {
		frag.vaulthunter_dot_exe("Jeff");
	}
	std::cout << std::endl;

	std::cout << "--- Test SuperTrap vaulthunter_dot_exe ---" << std::endl;
	for (int i = 0 ; i < 6 ; i++) {
		super.vaulthunter_dot_exe("Jean-Pierre");
	}
	std::cout << std::endl;

	std::cout << "--- Test challengeNewcomer ---" << std::endl;
	for (int i = 0 ; i < 6 ; i++) {
		scav.challengeNewcomer("Boop");
	}
	std::cout << std::endl;

	std::cout << "--- Test ninjaShoebox ---" << std::endl;
	ninja.ninjaShoebox(clap);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(ninja);
	std::cout << std::endl;

	std::cout << "--- Test SuperTrap ninjaShoebox ---" << std::endl;
	super.ninjaShoebox(clap);
	super.ninjaShoebox(frag);
	super.ninjaShoebox(scav);
	super.ninjaShoebox(ninja);
	std::cout << std::endl;

	std::cout << "--- Destructor messages should be below ---" << std::endl;
	return(0);
}
