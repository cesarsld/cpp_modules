/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 18:11:16 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/07 18:58:46 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::deque<T>::iterator iterator;

		MutantStack() : std::stack<T>() {}
		MutantStack(MutantStack const &copy) : std::stack<T>() {*this = copy;}
		virtual ~MutantStack() {};

		MutantStack	&operator=(MutantStack &rhs) {std::stack<T>::operator=(rhs); return (*this);};
		iterator begin() {return this->c.begin();}
		iterator end() {return this->c.end();}
};

#endif
