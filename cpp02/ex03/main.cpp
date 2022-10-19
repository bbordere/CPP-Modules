/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:41:01 by bbordere          #+#    #+#             */
/*   Updated: 2022/10/19 14:43:28 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main()
{
	Point	p1 = Point(0, -1);
	Point	p2 = Point(1, 1);
	Point	p3 = Point(0, 1);

	Point p_test = Point(0, 0);
	std::cout << "Point " << p_test << " is " << (bsp(p1, p2, p3, p_test) ? "in" : "out") << std::endl;
	p_test = Point(0.2, 0.15);
	std::cout << "Point " << p_test << " is " << (bsp(p1, p2, p3, p_test) ? "in" : "out") << std::endl;
	p_test = Point(0.2, 0.5);
	std::cout << "Point " << p_test << " is " << (bsp(p1, p2, p3, p_test) ? "in" : "out") << std::endl;
	p_test = Point(-0.58, 0.3);
	std::cout << "Point " << p_test << " is " << (bsp(p1, p2, p3, p_test) ? "in" : "out") << std::endl;
	p_test = Point(0.5, -0.6);
	std::cout << "Point " << p_test << " is " << (bsp(p1, p2, p3, p_test) ? "in" : "out") << std::endl;
	p_test = Point(0.2, -0.256);
	std::cout << "Point " << p_test << " is " << (bsp(p1, p2, p3, p_test) ? "in" : "out") << std::endl;
	p_test = Point(0.0, -1.0000);
	std::cout << "Point " << p_test << " is " << (bsp(p1, p2, p3, p_test) ? "in" : "out") << std::endl;
}
