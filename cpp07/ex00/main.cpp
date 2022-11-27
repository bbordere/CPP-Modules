/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:01:32 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/27 12:17:27 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

#include <iostream>

int main( void )
{
	int a = 2;
	int b = 3;

	std::cout << "------------------" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "Swapping !" << std::endl;
	swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b)  << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	std::cout << "------------------" << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "Swapping !" << std::endl;
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
	std::cout << "------------------" << std::endl;

	float e = 4.7897;
	float f = 8974.4568;

	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "Swapping !" << std::endl;
	swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
	std::cout << "max(e, f) = " << ::max(e, f) << std::endl;
	std::cout << "------------------" << std::endl;
	return 0;
}