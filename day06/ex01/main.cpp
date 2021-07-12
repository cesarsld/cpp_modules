/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:43:48 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/12 01:32:05 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

typedef	struct 	Data {
	std::string		s1;
	int				n;
	std::string		s2;
}					Data;

Data *create() {
	char s1[9];
	char s2[9];
	int val;

	for (int i = 0; i < 8 ; i++) {
		s1[i] = char(rand() % 95 + 32);
		s2[i] = char(rand() % 95 + 32);
	}
	val = rand();
	s1[8] = 0;
	s2[8] = 0;

	Data *da = new Data();
	da->s1 = std::string(s1);
	da->s2 = std::string(s2);
	da->n = val;

	std::cout << "s1 is: |" << da->s1 << "|" << std::endl;
	std::cout << "int is: " << da->n << std::endl;
	std::cout << "s2 is: |" << da->s2 << "|" << std::endl;
	return da;
}

uintptr_t serialize(Data *data) {
	return (reinterpret_cast<uintptr_t>(data));
}

Data *deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int 	main() {
	srand(time(0));

	
	Data *data = create();
	std::cout << data << std::endl;
	uintptr_t raw = serialize(data);
	std::cout << raw << std::endl;
	Data *test = deserialize(raw);

	std::cout << "s1 is: |" << test->s1 << "|"  << std::endl;
	std::cout << "int is: " << test->n << std::endl;
	std::cout << "s2 is: |" << test->s2 << "|" << std::endl;

	delete		test;
	return (0);
}
