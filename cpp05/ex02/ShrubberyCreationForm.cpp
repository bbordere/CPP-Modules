/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:07:40 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/06 16:03:49 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137)
{
	this->target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy): Form(copy.getName(), copy.getSignGrade(), copy.getExecGrade())
{
	this->target = copy.getTarget();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &assign)
{
	this->target = assign.getTarget();
	return (*this);
}

void ShrubberyCreationForm::doExecution(void) const
{
	std::ofstream	file;

	file.open(std::string(this->target + "_shrubberry").c_str(), std::ios::out);
	if (!file.is_open())
		return ;
	file << "        # #### ####" << std::endl;
	file << "      ### \\/#|### |/####" << std::endl;
	file << "   ###  \\/###|/ \\/ # ###" << std::endl;
	file << "  ##_\\_#\\_\\## | #/###_/_####" << std::endl;
	file << "## #### # \\ #| /  #### ##/##" << std::endl;
	file << " __#_--###`  |{,###---###-~" << std::endl;
	file << "           \\ }{" << std::endl;
	file << "            }}{" << std::endl;
	file << "            }}{" << std::endl;
	file << "            }}{" << std::endl;
	file << "            }}{" << std::endl;
	file << "            }}{" << std::endl;
	file.close();
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}