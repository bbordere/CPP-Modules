/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:15:26 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/19 12:33:49 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <iomanip>

int main(void)
{
	std::cout << std::setw(20) << std::setfill('-') << '\n';
	{
		Bureaucrat maurice("Maurice", 3);
		std::cout << maurice << std::endl;
		maurice.increaseGrade();
		std::cout << maurice << std::endl;
		maurice.decreaseGrade();
		std::cout << maurice << std::endl;
	}
	std::cout << std::setw(20) << std::setfill('-') << '\n';
	{
		try
		{
			Bureaucrat bob("Bob", 150);
			std::cout << bob << std::endl;
		}
		catch(const std::exception  &e)
		{
			std::cout << e.what() << std::endl;
		}
		
		std::cout << std::endl;
		try
		{
			Bureaucrat bob("Bob", 151);
			std::cout << bob << std::endl;
		}
		catch(const std::exception  &e)
		{
			std::cout << e.what() << std::endl;
		}
		
		std::cout << std::endl;
		try
		{
			Bureaucrat bob("Bob", 0);
			std::cout << bob << std::endl;
		}
		catch(const std::exception  &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
		
		try
		{
			Bureaucrat bob("Bob", 150);
			std::cout << bob << std::endl;
			bob.increaseGrade();
			std::cout << bob << std::endl;
		}
		catch(const std::exception  &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;

		try
		{
			Bureaucrat bob("Bob", 1);
			std::cout << bob << std::endl;
			bob.increaseGrade();
			std::cout << bob << std::endl;
		}
		catch(const std::exception  &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;

		try
		{
			Bureaucrat bob("Bob", 150);
			std::cout << bob << std::endl;
			bob.decreaseGrade();
			std::cout << bob << std::endl;
		}
		catch(const std::exception  &e)
		{
			std::cout << e.what() << std::endl;
		}	
	}
	std::cout << std::setw(20) << std::setfill('-') << '\n';
}
