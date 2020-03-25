/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 20:22:43 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/25 20:31:45 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
	Human julie(9000);
	
	julie.myIq();
	std::cout << "My brain address      is " << julie.identify()  << std::endl;
	std::cout << "My real brain address is " << julie.getBrain().identify() << std::endl;
	return (0);
}