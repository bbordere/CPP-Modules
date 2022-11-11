/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:41:01 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/08 13:41:27 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "a > b : " << ((a > b) ? "True\n" : "False\n");
	std::cout << "a >= b : " << ((a >= b) ? "True\n" : "False\n");
	std::cout << "a < b : " << ((a < b) ? "True\n" : "False\n");
	std::cout << "a <= b : " << ((a <= b) ? "True\n" : "False\n");
	std::cout << "a == b : " << ((a == b) ? "True\n" : "False\n");
	std::cout << "a != b : " << ((a != b) ? "True\n" : "False\n");
	std::cout << "a + b = " << (a + b) << std::endl;
	std::cout << "a - b = " << (a - b) << std::endl;
	std::cout << "a * b = " << (a * b) << std::endl;
	std::cout << "a / b = " << (a / b) << std::endl;
	Fixed const c = Fixed(42.42f);
	std::cout << Fixed::min(a, c) << std::endl;
	std::cout << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	return 0;
}
