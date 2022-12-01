/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:42:18 by bbordere          #+#    #+#             */
/*   Updated: 2022/12/01 22:09:05 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <iomanip>
#include <cstddef>

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
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	}
	{
		srand(time(NULL));
		
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		Span sp = Span(1);

		sp.addNumber(42);
		std::cout << "Span size: " << sp.getSize() << std::endl << std::endl;
		try
		{
			sp.addNumber(789);
		}
		catch(std::exception const &e)
		{
			std::cout << e.what() << std::endl;
		}
		
		std::cout << std::endl;
		try
		{
			std::vector<int> randV(50);
			std::generate(randV.begin(), randV.end(), std::rand);
			Span sp = Span(49);
			sp.fillSpan(randV.begin(), randV.end());
		}
		catch(std::exception const &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;
		try
		{
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(std::exception const &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;
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
		Span sp1 = Span(5);
		sp1.addNumber(6);
		sp1.addNumber(3);
		sp1.addNumber(17);
		sp1.addNumber(9);
		sp1.addNumber(11);
		Span sp2 = Span(sp1);
		Span sp3 = sp2;
		std::cout << "Shortest Span1: " << sp1.shortestSpan() << ' ';
		std::cout << "Longest Span1: " << sp1.longestSpan() << std::endl;
		std::cout << "Shortest Span2: " << sp2.shortestSpan() << ' ';
		std::cout << "Longest Span2: " << sp2.longestSpan() << std::endl;
		std::cout << "Shortest Span3: " << sp3.shortestSpan() << ' ';
		std::cout << "Longest Span3: " << sp3.longestSpan() << std::endl;
	}
	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		std::vector<int> vect;
		for(int i = 0; i < 500; i++)
			vect.push_back(i);

		Span sp = Span(500);
		sp.fillSpan(vect.begin(), vect.end());
		std::cout << "Span size: " << sp.getSize() << std::endl << std::endl;
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	}
	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		Span sp = Span(50000);
		for(int i = 0; i < 50000; i++)
			sp.addNumber(i);
		std::cout << "Span size: " << sp.getSize() << std::endl << std::endl;
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	}
	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		Span sp = Span(50000);
		for(int i = 0; i < 100000; i += 2)
			sp.addNumber(i);
		std::cout << "Span size: " << sp.getSize() << std::endl << std::endl;
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	}
	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		std::vector<int> randV(20000);
		std::generate(randV.begin(), randV.end(), std::rand);
		Span sp = Span(20000);
		sp.fillSpan(randV.begin(), randV.end());
		std::cout << "Span size: " << sp.getSize() << std::endl << std::endl;
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
		std::cout << std::setw(20) << std::setfill('-') << '\n';
	}
	return 0;
}
