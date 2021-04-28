/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:15:17 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/26 17:03:19 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap
{
	protected:
		int fragStats[8];
	public:
		FragTrap();
		FragTrap(std::string const _n);
		~FragTrap();
		void vaulthunter_dot_exe(std::string const &target);
};

#endif
