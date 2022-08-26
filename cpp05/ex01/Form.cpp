/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:39:55 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/06 14:18:22 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("Default Form"), signGrade(150), execGrade(150)
{
	this->isSigned = false;
}

Form::Form(Form const &copy): name(copy.getName()), signGrade(copy.getSignGrade()), execGrade(copy.getExecGrade())
{
	this->isSigned = copy.getSignStatus();
}

Form::Form(std::string const name, int const signGrade, int const execGrade): name(name), signGrade(signGrade), execGrade(execGrade)
{
	if(execGrade < 1 || signGrade < 1)
		throw Form::GradeTooHighException();
	else if(execGrade > 150 || signGrade > 150)
		throw Form::GradeTooLowException();
	else
		this->isSigned = false;
}

Form &Form::operator=(Form const &assign)
{
	this->isSigned = assign.getSignStatus();
	return (*this);
}

Form::~Form()
{
}

std::string const Form::getName(void) const
{
	return (this->name);
}

int				 Form::getExecGrade(void) const
{
	return (this->execGrade);
}

int				 Form::getSignGrade(void) const
{
	return (this->signGrade);
}

bool		Form::getSignStatus(void) const
{
	return (this->isSigned);
}

void		Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= this->signGrade)
		this->isSigned = true;
	else
		throw Form::GradeTooLowException();
}

char const *Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High !");
}

char const *Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low !");
}

std::ostream &operator<<(std::ostream &ouput, Form const &form)
{
	ouput << form.getName() << ", form " << (form.getSignStatus() ? "signed": "not signed") << ", grade to sign ";
	ouput << form.getSignGrade() << ", grade to exec " << form.getExecGrade();
	return (ouput);
}