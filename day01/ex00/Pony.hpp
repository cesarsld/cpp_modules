/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 18:56:37 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/23 20:03:29 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PONY_HPP
# define PONY_HPP
# include <string>
#include <iostream>

class Pony
{
	private:
	std::string			name;
	bool				majestic;
	
	public:
	Pony(std::string const _name, bool maj);
	void				talk(void);
	void				run(void);
	void				amIMajestic();
};

#endif