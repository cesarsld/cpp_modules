/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 18:35:27 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/16 12:21:12 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string	&ref = str;

	std::cout << "Using pointer:\n" << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << "Using reference:\n" << std::endl;
	std::cout << ref << std::endl;
	return (0);
}
