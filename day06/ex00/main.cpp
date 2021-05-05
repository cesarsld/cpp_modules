/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:27:39 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/04 13:26:17 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <typeinfo>
#include "ScalarConverter.hpp"

int main(int ac, char **av) {
	if (ac != 2)
		return (0);
	av++;

	ScalarConverter conv;

	std::string input = static_cast<std::string>(*av);
	std::string type = conv.findType(input);

	if (type == "int")
		conv.print(std::atoi(input.c_str()));
	else if (type == "char")
		conv.print(input.at(0));
	else if (type == "float")
		conv.print(std::atof(input.c_str()));
	else if (type == "double")
		conv.print(static_cast<double>(std::atof(input.c_str())));
	return (0);
}
