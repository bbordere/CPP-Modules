/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:15:26 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/20 19:48:39 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <iomanip>

int	main()
{
	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		PresidentialPardonForm form = PresidentialPardonForm("Form");
		Bureaucrat bob = Bureaucrat("bob", 20);

		try
		{
			form.execute(bob);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;

		bob.signForm(form);
		try
		{
			form.execute(bob);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;
		Bureaucrat Maurice = Bureaucrat("Maurice", 1);
		try
		{
			form.execute(Maurice);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';		
		PresidentialPardonForm form = PresidentialPardonForm("Form");
		Bureaucrat bob = Bureaucrat("bob", 20);

		bob.executeForm(form);
		bob.signForm(form);
		bob.executeForm(form);
		
		std::cout << std::endl;
		Bureaucrat Maurice = Bureaucrat("Maurice", 1);
		Maurice.executeForm(form);
		std::cout << std::endl;
	}
	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		ShrubberyCreationForm form = ShrubberyCreationForm("Garden");
		Bureaucrat bob = Bureaucrat("bob", 1);

		bob.signForm(form);
		bob.executeForm(form);
		std::cout << std::endl;
	}
	{
		RobotomyRequestForm form = RobotomyRequestForm("Maurice");
		Bureaucrat bob = Bureaucrat("bob", 1);

		bob.signForm(form);
		std::cout << std::endl;
		for (int i = 0; i < 5; i++)
		{
			bob.executeForm(form);
			std::cout << std::endl;
		}
	}
	{
		PresidentialPardonForm form = PresidentialPardonForm("Maurice");
		Bureaucrat bob = Bureaucrat("bob", 1);
		bob.signForm(form);
		bob.executeForm(form);
	}
	std::cout << std::setw(20) << std::setfill('-') << '\n';

}
