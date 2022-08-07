/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:20:56 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/04 15:35:10 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					raw_bits;
		static const int	frac_bits = 8;

	public:
		Fixed();
		Fixed(Fixed const &copy);
		Fixed(int const i);
		Fixed(float const f);
		
		Fixed &operator=(Fixed const &assign);
		
		bool	operator>(Fixed const &comp) const;
		bool	operator>=(Fixed const &comp) const;
		bool	operator<(Fixed const &comp) const;
		bool	operator<=(Fixed const &comp) const;
		bool	operator==(Fixed const &comp) const;
		bool	operator!=(Fixed const &comp) const;

		Fixed	operator+(Fixed const &fixed);
		Fixed	operator-(Fixed const &fixed);
		Fixed	operator/(Fixed const &fixed);
		Fixed	operator*(Fixed const &fixed);

		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);

		static	Fixed 	&min(Fixed &f1, Fixed &f2);
		static	Fixed 	const &min(Fixed const &f1, Fixed const &f2);
		static	Fixed 	&max(Fixed &f1, Fixed &f2);
		static	Fixed 	const &max(Fixed const &f1, Fixed const &f2);

		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &output, Fixed const &fixed);

#endif