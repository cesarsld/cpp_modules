/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjaimes <cjaimes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:56:46 by cjaimes           #+#    #+#             */
/*   Updated: 2021/04/12 20:24:02 by cjaimes          ###   ########.fr       */
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
		Fixed &operator=(Fixed const &f);
		int getRawBits(void) const;
		void setRawBits(int const raw);

};

#endif
