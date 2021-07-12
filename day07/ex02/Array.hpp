/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:03:20 by cjaimes           #+#    #+#             */
/*   Updated: 2021/07/12 11:36:01 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <cstdlib>
#include <string>

template<typename T>
class Array {
	private:
		T *arr;
		unsigned int len;

	public:
		Array() : arr(NULL), len(0) {}
		Array(unsigned int n) : arr(new T[n]), len(n) {}
		Array(Array const &copy): arr(NULL) {*this = copy;};
		~Array() {delete[] arr; }
		Array &operator=(Array const &rhs) {
			if (this == &rhs)
				return (*this);
			delete[] arr;
			arr = new T[rhs.size()];
			len = rhs.size();
			for (unsigned int i = 0; i < len; i++)
				arr[i] = rhs[i];
			return (*this);
		}
		T &operator[](unsigned int i) const {
			if (i >= len)
				throw OutOfBoundariesException();
			return arr[i];
		}
		unsigned int size() const {return (len);}

		class OutOfBoundariesException : public std::exception {
			public:
				const char *what() const throw() {
					return ("Tried to access unreachable value");
				}
		};
};

#endif
