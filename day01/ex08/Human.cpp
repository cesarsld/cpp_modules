/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 13:35:26 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/30 15:54:37 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <map>

Human::Human(std::string const &_name):
name(_name)
{}

void Human::meleeAttack(std::string const &target)
{
	std::cout << name << " has performed a melee attack on " << target << std::endl;
}

void Human::rangedAttack(std::string const &target)
{
		std::cout << name << " has performed a ranged attack on " << target << std::endl;
}

void Human::intimidatingShout(std::string const &target)
{
		std::cout << name << " has performed an intimidating shout on " << target << std::endl;
}

void meleeAttack1(std::string const &target)
{
	std::cout  << " has performed a melee attack on " << target << std::endl;
}

void Human::action(std::string const &action_name, std::string const &target)
{
	typedef void (Human::*Action)(const std::string&);
	Action g = &Human::meleeAttack;
	std::map<std::string, Action> table;
	table["meleeAttack"] = &Human::meleeAttack;
	table["rangedAttack"] = &Human::rangedAttack;
	table["intimidatingShout"] = &Human::intimidatingShout;
	if (table.find(action_name) == table.end())
		std::cout << "Invalid action" << std::endl;
	else
		(this->*table[action_name])(target);
}