/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:10:13 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/07 16:46:27 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
# include <algorithm>
# include <iterator>
#include <iostream>

template<typename T>
int easyfind(T &container, int n) {
	typename T::iterator iter = std::find(container.begin(), container.end(), n);
	if (iter == container.end())
		return (-1);
	else
		return (std::distance(container.begin(), iter));
}

#endif
