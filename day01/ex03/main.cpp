/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 18:03:23 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/16 18:08:16 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
# include <cstdlib>

int main()
{
	srand(time(0));

	std::cout << "--- 1.TEST HORDE OF 5 ---" << std::endl;
	ZombieHorde testHorde1(5);
	testHorde1.announce();

	std::cout << "--- 2.TEST HORDE OF 0 ---" << std::endl;
	ZombieHorde testHorde2(0);
	testHorde2.announce();

	std::cout << "--- 3.TEST HORDE OF -5 ---" << std::endl;
	ZombieHorde testHorde3(-5);
	testHorde3.announce();

	std::cout << "--- 4.TEST HORDE OF 20 ---" << std::endl;
	ZombieHorde testHorde4(20);
	testHorde4.announce();
	return (0);
}
