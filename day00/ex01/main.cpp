/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:57:04 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/15 15:08:57 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void display_top()
{
	std::cout << " __________ __________ __________ __________ " << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}

int search_contact(Contact pb[8], int current)
{
	int select = 0;

	if (current == 0)
	{
		std::cout << "No contacts in phonebook" << std::endl;
		return (1);
	}
	display_top();
	for (int i = 0; i < current ; i++)
		pb[i].display_preview(i + 1);
	std::cout << "Select an index to have more information on contact: ";
	while (!(std::cin >> select) || select < 1 || select > current)
		std::cout << "Invalid index, try again" << std::endl;
	std::cin.ignore();
	std::cin.clear();
	pb[select - 1].display_data();
	return (0);
}

int main()
{
	std::string input;
	Contact phonebook[8];
	int current = 0;

	std::cout << "Welcome to  the cool phonebook\nPlease input commands ADD, SEARCH or EXIT to proceed" << std::endl;
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input.compare("EXIT") == 0)
			break;
		else if (input.compare("ADD") == 0)
		{
			if (current < 8)
				phonebook[current++].setup_data();
			else
				std::cout <<  "Phonebook is full. Cannot add more contacts." << std::endl;
		}
		else if (input.compare("SEARCH") == 0)
		{
			if (search_contact(phonebook, current))
				continue;
		}
		else if (input.length() == 0)
			continue;
		else
			std::cout << "Wrong input, please try again" << std::endl;
	}
	return (0);
}