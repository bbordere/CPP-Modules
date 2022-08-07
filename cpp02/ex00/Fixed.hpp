/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:20:56 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/04 13:15:15 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed
{
	private:
		int					raw_bits;
		static const int	frac_bits = 8;

	public:
		Fixed();
		Fixed(Fixed const &copy);
		Fixed &operator=(Fixed const &assign);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif