/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:15:26 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/20 19:32:24 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <iomanip>

int main(void)
{
	std::cout << std::setw(20) << std::setfill('-') << '\n';
	{
		Form form("Form", 50, 150);
		std::cout << form << std::endl;
	}
	std::cout << std::setw(20) << std::setfill('-') << '\n';
	{
		try
		{
			Form form = Form("Form", 21, 42);
			std::cout << form << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;

		try
		{
			Form form = Form("Form", 0, 42);
			std::cout << form << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		
		std::cout << std::endl;
		try
		{
			Form form = Form("Form", 151, 42);
			std::cout << form << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		try
		{
			Form form = Form("Form", 21, 42);
			Bureaucrat	maurice = Bureaucrat("Maurice", 1);
			std::cout << form << std::endl;
			std::cout << maurice << std::endl;
			maurice.signForm(form);
			std::cout << form << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		
		std::cout << std::endl;
		try
		{
			Form form = Form("Form", 1, 1);
			Bureaucrat	maurice = Bureaucrat("Maurice", 3);
			std::cout << form << std::endl;
			std::cout << maurice << std::endl;
			maurice.signForm(form);
			std::cout << form << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		{
			Form form = Form("Form", 1, 1);
			Bureaucrat	maurice = Bureaucrat("Maurice", 2);
			std::cout << form << std::endl;
			std::cout << maurice << std::endl;
			try
			{
				maurice.signForm(form);
				std::cout << form << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << e.what() << std::endl;
			}
			std::cout << std::endl;
			maurice.increaseGrade();
			std::cout << "Maurice increased !" << std::endl;
			std::cout << maurice << std::endl;
			try
			{
				maurice.signForm(form);
				std::cout << form << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << e.what() << std::endl;
			}
		}
	}
	std::cout << std::setw(20) << std::setfill('-') << '\n';
}
