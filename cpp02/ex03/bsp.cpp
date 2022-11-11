/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:32:14 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/08 14:05:04 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int		orient(Point const a, Point const b, Point const c)
{
	float	v1X = b.getX().toFloat() - a.getX().toFloat();
	float	v1Y = b.getY().toFloat() - a.getY().toFloat();
	float	v2X = c.getX().toFloat() - a.getX().toFloat();
	float	v2Y = c.getY().toFloat() - a.getY().toFloat();
	float	scal = v1X * v2Y - v1Y * v2X;
	return (scal > 0.0 ? 1 : -1);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	int	sum = orient(a, b, point) + orient(b, c, point) + orient(c, a, point);
	return (std::abs(sum) == 3 ? true : false);
}
