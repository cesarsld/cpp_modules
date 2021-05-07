/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:10:13 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/07 18:10:38 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <cstdlib>
#include <list>
#include <algorithm>
class Span {
	private:
		std::list<int> list;
		unsigned int max;
		Span();

	public:
		Span(unsigned int n);
		Span(Span const &copy);
		~Span();
		Span &operator=(Span const &rhs);
		void addNumber(int n);
		long shortestSpan();
		long longestSpan() const ;
		template<typename Iter>
		void addNumber(Iter start, Iter end) {
			int left = static_cast<int>(max) - static_cast<int>(list.size());
			if (std::distance(start, end) > left)
				throw std::length_error("Container can't receive this many elements.");
			list.insert(list.begin(), start, end);
		}
};

#endif
