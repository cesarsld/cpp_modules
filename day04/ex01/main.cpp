/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 01:34:37 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/10 18:12:17 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *animals[10];

	std::cout << "======Creation messages======" << std::endl;
	for (int i = 0; i < 5; i++) {
		animals[2 * i] = new Cat();
		animals[2 * i + 1] = new Dog();
	}

	for(int i = 0; i < 10 ; i++) {
		std::cout << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}

	std::cout << "======Test copy======" << std::endl;
	Cat *a = new Cat();
	Cat *b = new Cat(*a);

	delete a;
	delete b;
	std::cout << std::endl;

	std::cout << "======Destruction messages======" << std::endl;
	for(int i = 0; i < 5; i++) {
		delete animals[2 * i];
		delete animals[2 * i + 1];
	}
}
