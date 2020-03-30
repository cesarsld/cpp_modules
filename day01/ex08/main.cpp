/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 14:27:53 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/30 15:54:11 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
	Human geralt("Geralt");

	geralt.action("meleeAttack", "Aliss");
	geralt.action("rangedAttack", "Bohb");
	geralt.action("intimidatingShout", "Cherls");
	geralt.action("fart", "Dev");
}