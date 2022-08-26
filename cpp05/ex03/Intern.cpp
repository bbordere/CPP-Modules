/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:04:34 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/18 11:34:15 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &copy)
{
	(void)copy;
}

Form *Intern::createPardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::createShruberry(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::createRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Intern &Intern::operator=(Intern const &assign)
{
	(void)assign;
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	Form	*(Intern::*fct_ptr)(std::string target) = NULL;
	std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form	*(Intern::*makers[])(std::string target) = {&Intern::createShruberry, &Intern::createRobotomy, &Intern::createPardon};
	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == name)
		{
			fct_ptr = makers[i];
			break;
		}
	}
	if (fct_ptr)
	{
		std::cout << "Intern creates " << name << std::endl;
		return (((*this).*fct_ptr)(target));
	}
	else
	{
		std::cout << "Intern can't creates " << name << std::endl;
		throw Intern::NotExistingExeception();
		return (NULL);
	}

}

const char *Intern::NotExistingExeception::what(void) const throw()
{
	return ("Form Not Existing !");
}

Intern::~Intern()
{
}