/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:12:23 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/11 11:37:42 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

int		Harl::get_level(std::string level)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			return (i);
	return (-1);
}

void	Harl::complain(std::string level)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*fct[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	void		(Harl::*fct_ptr)(void) = NULL;
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			fct_ptr = fct[i];
			break;
		}
	}
	if (fct_ptr)
		(this->*fct_ptr)();
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "This is debug message" << std::endl;
	std::cout << std::endl;
}
void	Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "This is info message" << std::endl;
	std::cout << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "This is warning message" << std::endl;
	std::cout << std::endl;
}
void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is error message" << std::endl;
	std::cout << std::endl;
}