/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:56:46 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/12 20:32:52 by cjaimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>

class Fixed {
	private:
		int val;
		static const int bits = 8;

	public:
		Fixed(void);
		~Fixed();
		Fixed(Fixed const &f);
		Fixed(int const val);
		Fixed(float const val);
		Fixed	&operator=(Fixed const &f);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

};

std::ostream &operator<<(std::ostream &o, Fixed const &f);

#endif
