/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:18:03 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/07 14:28:44 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() {
	Array<int> empty;
	Array<int> filled(5);

	std::cout << "size: " << empty.size() << std::endl;
	std::cout << "size: " << filled.size() << std::endl;

	filled[0] = 1;
	filled[1] = 10;
	filled[2] = 100;
	filled[3] = 1000;
	filled[4] = 10000;

	for (unsigned int i = 0; i < filled.size() + 1; i++) {
		try {
			std::cout << "value of element #" << i << ": " << filled[i] << std::endl;
		}
		catch(std::exception &e) {
			std::cout << "Error: " << e.what() <<std::endl;
		}
	}

}
