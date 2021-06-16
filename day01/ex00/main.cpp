/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 19:42:37 by cjaimes           #+#    #+#             */
/*   Updated: 2021/06/09 09:17:59 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony pony("Mike", false);
	pony.talk();
	pony.run();
	pony.amIMajestic();
}

void	ponyOnTheHeap()
{
	Pony *pony = new Pony("Gerald", true);
	pony->talk();
	pony->run();
	pony->amIMajestic();
	delete pony;
}

int		main()
{
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();
	return (0);
}
