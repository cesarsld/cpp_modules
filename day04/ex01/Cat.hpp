/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 21:46:17 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/10 17:57:40 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain *brain;
	public:
		Cat();
		Cat(Cat const &copy);
		~Cat();
		Cat &operator=(Cat const &rhs);
		void makeSound() const;
		Brain *getBrain();
};

#endif
