/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:43:32 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/04 15:37:26 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called !" << std::endl;
	this->raw_bits = 0;
}

Fixed::Fixed(int const i)
{
	// std::cout << "Int constructor called !" << std::endl;
	this->raw_bits = i << this->frac_bits;
}

Fixed::Fixed(float const f)
{
	// std::cout << "Float constructor called !" << std::endl;
	this->raw_bits = roundf(f * (1 << this->frac_bits));	
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called !" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return (this->raw_bits);
}

void	Fixed::setRawBits(int const raw)
{
	this->raw_bits = raw;
}

int	Fixed::toInt(void) const
{
	return (this->raw_bits >> this->frac_bits);
}

float	Fixed::toFloat(void) const
{
	return (this->raw_bits  / (float)(1 << this->frac_bits));
}

Fixed &Fixed::operator=(Fixed const &assign)
{
	if (this != &assign)
	{
		// std::cout << "Copy assignement called !" << std::endl;
		this->raw_bits = assign.getRawBits();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &output, Fixed const &fixed)
{
	output << fixed.toFloat();
	return (output);
}

Fixed::Fixed(Fixed const &copy)
{
	// std::cout << "Copy constructor called !" << std::endl;
	this->raw_bits = copy.getRawBits();
}

bool Fixed::operator>(Fixed const &comp) const
{
	return (this->getRawBits() > comp.getRawBits());
}

bool Fixed::operator>=(Fixed const &comp) const
{
	return (this->getRawBits() >= comp.getRawBits());
}

bool Fixed::operator<(Fixed const &comp) const
{
	return (this->getRawBits() < comp.getRawBits());
}

bool Fixed::operator<=(Fixed const &comp) const
{
	return (this->getRawBits() <= comp.getRawBits());
}

bool Fixed::operator==(Fixed const &comp) const
{
	return (this->getRawBits() == comp.getRawBits());
}

bool Fixed::operator!=(Fixed const &comp) const
{
	return (this->getRawBits() != comp.getRawBits());
}

Fixed 	Fixed::operator+(Fixed const &fixed)
{
	Fixed	res = fixed;
	res.setRawBits(this->getRawBits() + res.getRawBits());
	return (res);
}

Fixed 	Fixed::operator-(Fixed const &fixed)
{
	Fixed	res = fixed;
	res.setRawBits(this->getRawBits() - res.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(Fixed const &fixed)
{
	Fixed	res = fixed;
	res.setRawBits((this->getRawBits() * res.getRawBits()) >> this->frac_bits);
	return (res);
}

Fixed	Fixed::operator/(Fixed const &fixed)
{
	Fixed	res = fixed;
	res.setRawBits((this->getRawBits() << this->frac_bits) / res.getRawBits());
	return (res);
}

Fixed	Fixed::operator++(void) //prefix
{
	this->raw_bits++;
	return (*this);
}

Fixed	Fixed::operator++(int) //postfix
{
	Fixed	res = *this;
	this->raw_bits++;
	return (res);
}

Fixed	Fixed::operator--(void) //prefix
{
	this->raw_bits--;
	return (*this);
}

Fixed	Fixed::operator--(int) //postfix
{
	Fixed	res = *this;
	this->raw_bits--;
	return (res);
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	return (f1 < f2 ? f1 : f2);
}

Fixed	const &Fixed::min(Fixed const &f1, Fixed const &f2)
{
	return (f1 < f2 ? f1 : f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	return (f1 > f2 ? f1 : f2);
}

Fixed	const &Fixed::max(Fixed const &f1, Fixed const &f2)
{
	return (f1 > f2 ? f1 : f2);
}