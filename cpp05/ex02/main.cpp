/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:15:26 by bbordere          #+#    #+#             */
/*   Updated: 2022/08/26 17:36:25 by bbordere         ###   ########.fr       */
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
		bob.signForm(form);
		try
		{
			form.execute(bob);
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
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
		PresidentialPardonForm form = PresidentialPardonForm("Form");
		Bureaucrat bob = Bureaucrat("bob", 20);
		bob.executeForm(form);
		bob.signForm(form);
		bob.executeForm(form);
		Bureaucrat Maurice = Bureaucrat("Maurice", 1);
		Maurice.executeForm(form);
	}
	{
		ShrubberyCreationForm form = ShrubberyCreationForm("Form");
		Bureaucrat bob = Bureaucrat("bob", 1);
		bob.signForm(form);
		bob.executeForm(form);
	}
	{
		RobotomyRequestForm form = RobotomyRequestForm("Form");
		Bureaucrat bob = Bureaucrat("bob", 1);
		bob.signForm(form);
		bob.executeForm(form);
		bob.executeForm(form);
		bob.executeForm(form);
	}
	{
		PresidentialPardonForm form = PresidentialPardonForm("Form");
		Bureaucrat bob = Bureaucrat("bob", 1);
		bob.signForm(form);
		bob.executeForm(form);
	}
}
