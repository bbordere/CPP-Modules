/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:16:17 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/04 17:28:56 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
#define __POINT_HPP__

#include "Fixed.hpp"


class Point
{
	private:
		Fixed const	x;
		Fixed const	y;

	public:
		Point();
		Point(float x, float y);
		Point(Point const &copy);
		Point &operator=(Point const &asssign);
		Fixed	get_x(void) const;
		Fixed	get_y(void) const;
		~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const p);

#endif
