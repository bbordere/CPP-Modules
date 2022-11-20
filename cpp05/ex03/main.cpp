/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:15:26 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/20 17:46:50 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <iomanip>

int	main()
{
	std::cout << std::setw(20) << std::setfill('-') << '\n';
	Intern intern = Intern();
	Bureaucrat boss = Bureaucrat("Boss", 1);
	Form *form;

	try
	{
		form = intern.makeForm("shrubbery creation", "Garden");
		boss.signForm(*form);
		boss.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{}
	std::cout << std::endl;

	try
	{
		form = intern.makeForm("robotomy request", "Bob");
		boss.signForm(*form);
		boss.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{}

	std::cout << std::endl;
	try
	{
		form = intern.makeForm("presidential pardon", "Mr Jack");
		boss.signForm(*form);
		boss.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{}

	std::cout << std::endl;
	try
	{
		form = intern.makeForm("random form", "Mr Random");
		boss.signForm(*form);
		boss.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{}
	std::cout << std::setw(20) << std::setfill('-') << '\n';
}