/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:56:40 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/12 20:58:10 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <cmath>

Fixed::Fixed() : val(0)
{
	std::cout << "Default constructor Called" << std::endl;
	return;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor Called" << std::endl;
	val = i << bits;
	return;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor Called" << std::endl;
	float factor = 1 << bits;
	val = (int)roundf(f * factor);
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &f)
{
	std::cout << "Copy constructor Called" << std::endl;
	*this = f;
	return;
}

Fixed &Fixed::operator=(Fixed const &f)
{
	std::cout << "Assignation operator called" << std::endl;
	val = f.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (val);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	val = raw;
	return;
}

float	Fixed::toFloat(void) const
{
	return ((float)val / (1 << bits));
}

int	Fixed::toInt(void) const
{
	return (val >> bits);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &f)
{
	o << f.toFloat();
	return (o);
}

