/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:43:32 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/06 11:01:40 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called !" << std::endl;
	this->raw_bits = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called !" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called !" << std::endl;
	return (this->raw_bits);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called !" << std::endl;
	this->raw_bits = raw;
}

Fixed &Fixed::operator=(Fixed const &assign)
{
	if (this != &assign)
	{
		std::cout << "Copy assignement called !" << std::endl;
		this->raw_bits = assign.getRawBits();
	}
	return (*this);
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called !" << std::endl;
	this->raw_bits = copy.getRawBits();
}