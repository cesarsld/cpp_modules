/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:15:17 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/08 16:17:25 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"


class FragTrap : public virtual ClapTrap
{
	protected:
	int fragstats[3];
public:
	FragTrap();
	FragTrap(std::string const _n);
	FragTrap(FragTrap const &copy);
	FragTrap &operator=(FragTrap const &rhs);
	~FragTrap();
	void attack(std::string const &target);
	void highFivesGuys(void);
};

#endif
