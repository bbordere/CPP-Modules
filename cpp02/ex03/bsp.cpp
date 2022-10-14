/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:32:14 by bbordere          #+#    #+#             */
/*   Updated: 2022/10/14 13:25:40 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int		orient(Point const a, Point const b, Point const c)
{
	float	v1X = b.get_x().toFloat() - a.get_x().toFloat();
	float	v1Y = b.get_y().toFloat() - a.get_y().toFloat();
	float	v2X = c.get_x().toFloat() - a.get_x().toFloat();
	float	v2Y = c.get_y().toFloat() - a.get_y().toFloat();
	float	scal = v1X * v2Y - v1Y * v2X;
	return (scal > 0 ? 1 : -1);
}

bool	bsp(Point const a, Point const b, Point const c, Point const p)
{
	float	sum = orient(a, b, p) + orient(b, c, p) + orient(c, a, p);
	return (std::abs(sum) == 3 ? true : false);
}