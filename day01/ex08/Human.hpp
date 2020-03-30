/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 13:32:12 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/30 15:30:21 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <string>
# include <iostream>

class Human
{
	private:
	std::string const &name;
	void	meleeAttack(std::string const & target);
	void	rangedAttack(std::string const &target);
	void	intimidatingShout(std::string const & target);

	public:
	Human(std::string const &_name);
	void	action(std::string const &action_name, std::string const &target);
};

#endif