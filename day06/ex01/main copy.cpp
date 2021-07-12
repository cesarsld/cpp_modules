/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:43:48 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/07 00:11:20 by cjaimes          ###   ########.fr       */
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

void *serialize(void) {
	char *data = new char[20];
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
	std::cout << "s1 is: |" << s1 << "|" << std::endl;
	std::cout << "int is: " << val << std::endl;
	std::cout << "s2 is: |" << s2 << "|" << std::endl;

	for (int i = 0; i < 8 ; i++) {
		data[i] = s1[i];
		data[i + 12] = s2[i];
	}
	char *tempData;
	tempData = reinterpret_cast<char *>(&val);
	for (int i = 0; i < 4; i++) {
		data[8 + i] = tempData[i];
	}
	return (reinterpret_cast<void *>(data));
}

Data *deserialize(void* raw) {
	char *chrData = reinterpret_cast<char *>(raw);
	Data *data = new Data();
	char intData[4];

	data->s1 = std::string(chrData, 8);
	data->s2 = std::string(chrData + 12, 8);
	for (int i = 0; i < 4; i++) {
		intData[i] = chrData[8 + i];
	}
	data->n = *(reinterpret_cast<int *>(intData));
	return data;
}

int 	main() {
	// Initializing rand seed (new one every second)
	srand(time(0));

	void *raw = serialize();
	Data *test = deserialize(raw);

	std::cout << "s1 is: |" << test->s1 << "|"  << std::endl;
	std::cout << "int is: " << test->n << std::endl;
	std::cout << "s2 is: |" << test->s2 << "|" << std::endl;

	delete		test;
	delete[]	reinterpret_cast<char*>(raw);

	return (0);
}
