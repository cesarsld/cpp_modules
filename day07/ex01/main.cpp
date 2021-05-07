/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 13:54:53 by cjaimes           #+#    #+#             */
/*   Updated: 2021/05/07 14:02:09 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <cstdlib>

void assign42(int &a) {
	a = 42;
}

int main() {
	int arr[5];

	iter<int>(arr, 5, assign42);

	for (int i = 0 ; i < 5 ;  i++)
		std::cout << "Value of element #" << i << ": " << arr[i] << std::endl;
}
