/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 19:42:37 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/23 19:58:57 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony pony("Mike");
	pony.talk();
	pony.run();
}

void	ponyOnTheHeap()
{
	Pony *pony = new Pony("Gerald");
	pony->talk();
	pony->run();
	delete pony;
}

int		main()
{
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();
	return (0);
}