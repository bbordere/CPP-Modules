/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:14:45 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/06 16:15:50 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5)
{
	this->target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy): Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade())
{
	this->target = copy.getTarget();
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &assign)
{
	this->target = assign.getTarget();
	return (*this);
}

void PresidentialPardonForm::doExecution(void) const
{
	std::cout << this->target << " has been pardonned by Zaphod Beeblebrox" << std::endl;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return (this->target);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}
