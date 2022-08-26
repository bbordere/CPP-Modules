/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:15:26 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/18 11:33:41 by bbordere         ###   ########.fr       */
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
	Intern intern = Intern();
	Bureaucrat boss = Bureaucrat("Boss", 1);
	Form *form;
	try
	{
		form = intern.makeForm("shrubbery creation", "Mr Maurice");
		boss.signForm(*form);
		boss.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{}
	try
	{
		form = intern.makeForm("robotomy request", "Bob");
		boss.signForm(*form);
		boss.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{}
	try
	{
		form = intern.makeForm("presidential pardon", "Mr Jack");
		boss.signForm(*form);
		boss.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{}
	try
	{
		form = intern.makeForm("random form", "Ms Pearse");
		boss.signForm(*form);
		boss.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{}
}