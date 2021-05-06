/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 00:14:53 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/07 00:41:54 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

class Base {
	public:
		virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void) {
	int t = rand() % 3;
	Base *b;
	char c;

	switch(t) {
		case 0:
			b = new A();
			c = 'A';
			break;
		case 1:
			b = new B();
			c = 'B';
			break;
		case 2:
			b = new C();
			c = 'C';
			break;
	}
	std::cout << "Generating class of type " << c << std::endl;
	return (b);
}

void identify_from_pointer(Base *p) {
	char c = 0;
	if (dynamic_cast<A*>(p) != NULL)
		c = 'A';
	else if (dynamic_cast<B*>(p) != NULL)
		c = 'B';
	else if (dynamic_cast<C*>(p) != NULL)
		c = 'C';

	if (c)
		std::cout << "Pointer identified as class " << c << std::endl;
	else
		std::cout << "unable to identify class" << std::endl;
}

void identify_from_reference(Base &p) {
	char	c = 0;

	try {
		A a = dynamic_cast<A&>(p);
		c = 'A';
	}
	catch(std::exception &e) { }

	try {
		B b = dynamic_cast<B&>(p);
		c = 'B';
	}
	catch(std::exception &e) { }

	try {
		C _c = dynamic_cast<C&>(p);
		c = 'C';
	}
	catch(std::exception &e) { }

	if (c)
		std::cout << "Reference identified as class " << c << std::endl;
	else
		std::cout << "Impossible to identify class of reference" << std::endl;
	return;
}

int 	main() {
	// Initializing rand seed (new one every second)
	srand(time(0));

	std::cout << "--- Generating random class (A, B, C) ---" << std::endl;
		Base *ptr = generate();
		identify_from_pointer(ptr);
		identify_from_reference(*ptr);
	std::cout << std::endl;

	std::cout << "--- Generating wrong class of type Base (not A, B or C) ---" << std::endl;
		Base *ptr2 = new Base;
		identify_from_pointer(ptr2);
		identify_from_reference(*ptr2);
	std::cout << std::endl;

	delete ptr;
	delete ptr2;
	return (0);
}
