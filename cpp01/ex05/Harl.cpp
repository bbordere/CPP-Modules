/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:12:23 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/04 11:17:17 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
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
	std::cout << "This is debug message" << std::endl;
}
void	Harl::info(void)
{
	std::cout << "This is info message" << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "This is warning message" << std::endl;
}
void	Harl::error(void)
{
	std::cout << "This is error message" << std::endl;
}