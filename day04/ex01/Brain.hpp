/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:23:56 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/10 17:51:35 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <iostream>
#include <cstdlib>
#include <array>

class Brain {
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain const &copy);
		~Brain();
		Brain &operator=(Brain const &rhs);
		std::string getIdea(int index) const;
		void setIdea(int index, std::string const idea);
};

#endif
