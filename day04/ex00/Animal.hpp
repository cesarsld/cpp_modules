/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 21:37:47 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/10 18:26:44 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>
#include <cstdlib>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const &copy);
		virtual ~Animal();
		Animal &operator=(Animal const &rhs);

		std::string getType() const;
		virtual void makeSound() const;
};

#endif
