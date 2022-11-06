/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:50:04 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/06 23:27:04 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	{
		ClapTrap	Bob("Bob");
		Bob.attack("Alice");

		Bob.beRepaired(1);
		Bob.beRepaired(3);
		Bob.beRepaired(4294967295);

		Bob.takeDamage(1);
		Bob.takeDamage(2);
		Bob.takeDamage(4294967295);

		Bob.attack("Bob2");
	}
	{
		std::cout << std::endl;
		ClapTrap	Maurice("Maurice");
		for (int i = 0; i < 11; i++)
			Maurice.beRepaired(1);
	}
	{
		std::cout << std::endl;
		ClapTrap	Jack("Jack");
		for (int i = 0; i < 11; i++)
			Jack.attack("Bob");
	}
}
