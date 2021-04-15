/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:56:55 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/15 15:03:30 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int ac, char **av)
{
	av++;
	if (ac == 1)
		std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (*av)
		{
			std::string str(*av);
			for (size_t i = 0; i < str.length(); i++)
				std::cout << (char)std::toupper(str[i]);
			av++;
		}
	std::cout << "\n";
	return (0);
}
