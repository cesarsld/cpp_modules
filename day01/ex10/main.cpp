/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 16:58:54 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/30 17:18:08 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void print_file(char *fileName)
{
	std::ifstream file;
	std::string line;

	file.open(fileName, std::ios::in);
	if (!file.is_open() || !file.good())
	{
		std::cout << "File could not be opened" << std::endl;
		return ;
	}
	while (getline(file, line))
	{
		std::cout << line;
		if (!file.eof())
			std::cout << std::endl;
	}
	file.close();
}

int main (int ac, char **av)
{
	std::string line;
	
	if (ac == 1)
	{
		while (getline(std::cin, line))
			std::cout << line  << std::endl;
	}
	else
	{
		av++;
		while (*av)
			print_file(*av++);
	}
	return (0);
}
