/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:56:16 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/12 12:12:03 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n) : max(n){
	return;
}

Span::Span(Span const &copy){
	*this = copy;
	return;
}

Span::~Span() {
	return;
}

Span &Span::operator=(Span const &rhs) {
	max = rhs.max;
	list = rhs.list;
	return (*this);
}

void Span::addNumber(int n) {
	if (list.size() == max)
		throw std::length_error("List fill");
	list.push_back(n);
	return;
}

long Span::shortestSpan() {
	if (list.size() < 2)
		throw std::logic_error("Need minimum two numbers to find a span.");
	long span = UINT32_MAX;
	std::list<int>::iterator start;
	for (start = list.begin(); start != list.end(); start++) {
		std::list<int>::iterator next;
		for (next = start; next != list.end(); next++) {
			if (next == start)
				continue;
			long tmp = std::abs(*next - *start);
			if (tmp < span)
				span = tmp;
		}
	}
	return span;
}

long Span::longestSpan() const{
	if (list.size() < 2)
		throw std::logic_error("Need minimum two numbers to find a span.");
	long min = *std::min_element(list.begin(), list.end());
	long max = *std::max_element(list.begin(), list.end());
	return (max - min);
}
