/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:50:04 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/06 23:40:47 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	{
		ScavTrap Bob("Bob");
	}
	{
		std::cout << std::endl;
		ScavTrap Maurice("Maurice");
		Maurice.guardGate();
		for (int i = 0; i < 11; i++)
			Maurice.attack("Bob");
		Maurice.beRepaired(51);
		Maurice.guardGate();
	}
}
