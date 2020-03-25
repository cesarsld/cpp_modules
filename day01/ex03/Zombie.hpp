/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 10:44:05 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/25 12:48:47 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
	private:
	std::string	name;
	std::string	type;

	public:
	Zombie(void);
	~Zombie();
	Zombie(std::string _name, std::string _type);
	static std::string	randomName(int length);
	void				announce(void);
	void				setZombieStats(std::string const _name, std::string const _type);
};

#endif