/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:42:18 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/18 11:10:27 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

#include "Span.hpp"

#include <iostream>
#include <iomanip>

int main()
{
	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		Span sp = Span(1);
		sp.addNumber(42);
		try
		{
			sp.addNumber(789);
		}
		catch(std::exception const &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(std::exception const &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(std::exception const &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		std::vector<int> vect;
		for(int i = 0; i < 500; i++)
			vect.push_back(i);

		Span sp = Span(500);
		sp.fillSpan(vect.begin(), vect.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		Span sp = Span(50000);
		for(int i = 0; i < 50000; i++)
			sp.addNumber(i);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		Span sp = Span(50000);
		for(int i = 0; i < 100000; i += 2)
			sp.addNumber(i);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;		
		std::cout << sp.getSize() << std::endl;
	}
	return 0;
}
