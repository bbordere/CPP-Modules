/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:32:14 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/04 17:27:43 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	float	s1 = c.get_y().toFloat() - a.get_y().toFloat();
	float	s2 = c.get_x().toFloat() - a.get_x().toFloat();
	float	s3 = b.get_y().toFloat() - a.get_y().toFloat();
	float	s4 = p.get_y().toFloat() - a.get_y().toFloat();
	float	w1 = (a.get_x().toFloat() * s1 + s4 * s2 - p.get_x().toFloat() * s1)
				/ (s3 * s2 - (b.get_x().toFloat() - a.get_x().toFloat()) * s1);
	float	w2 = (s4 - w1 * s3 ) / s1;
	return (w1 > 0 && w2 > 0 && (w1 + w2) < 1);
}