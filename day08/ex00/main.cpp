/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:33:05 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/07 16:45:32 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>

int main() {
	std::list<int> list;
	std::vector<int> vector;
	std::cout << "--- Using easyfind on empty containers ---" << std::endl;
	// std::cout << "Return value of search 42 in empty list: " << easyfind(list, 42) << std::endl;
	// std::cout << "Return value of search 42 in empty vector: " << easyfind(vector, 42) << std::endl << std::endl;

	std::cout << "--- Filling the containers and trying again ---" << std::endl;
	list.push_back(0);
	list.push_back(15);
	list.push_back(42);
	list.push_back(18);

	vector.push_back(21);
	vector.push_back(42);
	vector.push_back(80);
	vector.push_back(42);
	std::cout << "Return value of search 42 in list: " << easyfind(list, 42) << std::endl;
	std::cout << "Return value of search 42 in vector: " << easyfind(vector, 42) << std::endl << std::endl;
}
