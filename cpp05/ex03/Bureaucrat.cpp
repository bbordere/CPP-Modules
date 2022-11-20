/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:04:49 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/20 15:02:13 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("Default Name")
{
	this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string const name, int grade): name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = grade;
	
}

std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy): name(copy.getName())
{
	this->grade = copy.getGrade();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &assign)
{
	this->grade = assign.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	
}

char const *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High !");
}

char const *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low !");
}

void	Bureaucrat::increaseGrade(void)
{
	if (this->grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void	Bureaucrat::decreaseGrade(void)
{
	if (this->grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->name << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}
	
}

void	Bureaucrat::executeForm(Form &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->name << " couldn’t execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &output, Bureaucrat const &bureaucrat)
{
	output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (output);
}