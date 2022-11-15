/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:50:04 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/14 11:46:54 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	{
		FragTrap Bob("Bob");
		Bob.highFivesGuys();
	}
	{
		std::cout << std::endl;
		FragTrap Maurice("Maurice");
		Maurice.highFivesGuys();
		for (int i = 0; i < 5; i++)
			Maurice.attack("Bob");
		std::cout << std::endl;
		Maurice.takeDamage(51);
		Maurice.beRepaired(51);
		Maurice.takeDamage(450);
		Maurice.attack("Bob");
	}
}
