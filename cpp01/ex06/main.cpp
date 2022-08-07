/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:10:59 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/11 11:40:57 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments !" << std::endl;
		return (1);
	}
	Harl Harl;
	switch (Harl.get_level(std::string(av[1])))
	{
		case 0:
			Harl.complain("DEBUG");
			Harl.complain("INFO");
			Harl.complain("WARNING");
			Harl.complain("ERROR");
			break;
		case 1:
			Harl.complain("INFO");
			Harl.complain("WARNING");
			Harl.complain("ERROR");
			break;
		case 2:
			Harl.complain("WARNING");
			Harl.complain("ERROR");
			break;
		case 3:
			Harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}