/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:54:44 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/04 13:12:15 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <string>
#include <cstdlib>
#include <iostream>

class ScalarConverter {
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &copy);
		~ScalarConverter();
		ScalarConverter &operator=(ScalarConverter const &rhs);

		std::string findType(std::string const &type) const;
		void print(char c) const;
		void print(int c) const;
		void print(float c) const;
		void print(double c) const;

};

#endif
