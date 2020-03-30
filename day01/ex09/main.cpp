/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 16:33:24 by cjaimes           #+#    #+#             */
/*   Updated: 2020/03/30 16:55:04 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main()
{
	Logger logger("hello.log");

	logger.log("console", "hello");
	logger.log("file", "I am root");
	logger.log("file", "And this is crazy");
	logger.log("file", "So here's my number");
}