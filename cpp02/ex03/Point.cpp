/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:16:21 by bbordere          #+#    #+#             */
/*   Updated: 2022/10/19 14:41:25 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(Fixed(0)), y(Fixed(0))
{
}

Point::Point(float x, float y): x(Fixed(x)), y(Fixed(y))
{
}

Point::Point(Point const &copy): x(copy.getX()), y(copy.getY())
{
}

Point &Point::operator=(Point const &asssign)
{
	this->x = asssign.getX();
	this->y = asssign.getY();
	return (*this);
}

Point::~Point(void)
{
}

Fixed	Point::getX(void) const
{
	return (this->x);
}

Fixed	Point::getY(void) const
{
	return (this->y);
}

std::ostream &operator<<(std::ostream &stream, Point const &point)
{
	stream << "(" << point.getX().toFloat() << ", " << point.getY().toFloat() << ")";
	return (stream);
}
