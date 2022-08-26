/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:56:03 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/18 11:34:15 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45)
{
	this->target = "Default";
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45)
{
	this->target = target;
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy): Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade())
{
	this->target = copy.getTarget();
	srand(time(NULL));
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &assign)
{
	this->target = assign.getTarget();
	srand(time(NULL));
	return (*this);
}

void RobotomyRequestForm::doExecution(void) const
{
	std::cout << "*Loud sound of drilling machine*" << std::endl;
	if (rand() % 2)
		std::cout << this->target << " has been robotomized !" << std::endl;
	else
		std::cout << "Robotomization failed. " << this->target << " is maybe dead" << std::endl;
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return (this->target);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}
