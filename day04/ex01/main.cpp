/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 18:19:03 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/30 16:34:47 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "MightySpoon.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "EvilRock.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

int	main() {
	Character	*bob = new Character("Bobby");
	Character	*alice = new Character("Alice");
	Character   *charlie = new Character("Charlie");
	AWeapon		*pRifle = new PlasmaRifle();
	AWeapon		*pFist = new PowerFist();
	AWeapon		*mSpoon = new MightySpoon();

	std::cout << "----- Bobby, Alice and Charlie characters were just created ------" << std::endl;
		std::cout << *bob << *alice << *charlie;
	std::cout << std::endl;

	std::cout << "----- A SuperMutant and RadScorpion appear! ------" << std::endl;
		Enemy	*mutant = new SuperMutant();
		Enemy	*scorpion = new RadScorpion();
	std::cout << std::endl;

	std::cout << "----- Bobby tries to attack the SuperMutant! ------" << std::endl;
		bob->attack(mutant);
	std::cout << std::endl;

	std::cout << "----- Alice found weapons, they equip them! ------" << std::endl;
		alice->equip(pFist);
		bob->equip(pRifle);
		charlie->equip(mSpoon);
		std::cout << *bob << *alice << *charlie;
	std::cout << std::endl;

	std::cout << "----- Bobby starts shooting at the RadScorpion until it dies! ------" << std::endl;
		bob->attack(scorpion);
		bob->attack(scorpion);
		bob->attack(scorpion);
		bob->attack(scorpion);
		std::cout << *bob << *alice;
	std::cout << std::endl;

	std::cout << "----- Alice charges at the SuperMutant and hits him 3 times! Bob recovers his AP... ------" << std::endl;
		alice->attack(mutant);
		alice->attack(mutant);
		alice->attack(mutant);
		bob->recoverAP();
		std::cout << *bob << *alice;
		std::cout << "The mutant has " << mutant->getHP() << " HP left." << std::endl;
	std::cout << std::endl;

	std::cout << "----- Bobby sees an opportunity and finishes the Super Mutant ------" << std::endl;
		bob->attack(mutant);
		bob->attack(mutant);
		std::cout << *bob << *alice;
	std::cout << std::endl;

	std::cout << "----- An Evile Rockappears! ------" << std::endl;
		Enemy	*rock = new EvilRock();
	std::cout << std::endl;

	alice->recoverAP();
	bob->recoverAP();
	bob->recoverAP();
	alice->recoverAP();

	std::cout << "----- They all try to attack it! ------" << std::endl;
		alice->attack(rock);
		charlie->attack(rock);
		bob->attack(rock);
		std::cout << *bob << *alice << *charlie;
	std::cout << std::endl;

	std::cout << "----- THE END ------" << std::endl;
	delete alice;
	delete bob;
	delete charlie;
	delete pRifle;
	delete pFist;
	delete mSpoon;

	return (0);
}
