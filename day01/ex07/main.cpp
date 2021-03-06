/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 12:28:03 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/16 12:49:00 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int replace (std::string filename, std::string	s1, std::string	s2)
{
	std::ifstream file;
	std::ofstream out;
	std::string outname;
	std::string line;

	outname = filename + ".replace";
	file.open(filename, std::ios::in);

	if (!file.is_open())
	{
		std::cout << "Could not open file" << std::endl;
		return (0);
	}
	out.open(outname, std::ios::out);
	if (!out.is_open()) {
		std::cout << "Could not create file" << std::endl;
		return (0);
	}
	while (getline(file, line))
	{
		std::size_t index = line.find(s1);
		if (index != std::string::npos)
		{
			line = line.replace(index, s1.length(), s2);
		}
		out << line;
		if (!file.eof())
			out << std::endl;
	}
	file.close();
	out.close();
	return (0);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	for (int i = 1; i < 4; i++)
	{
		if (std::string(av[i]).length() == 0)
		{
			std::cout << "String is empty, stopping code execution"<< std::endl;
			return (0);
		}
	}
	return (replace(av[1], av[2], av[3]));
}