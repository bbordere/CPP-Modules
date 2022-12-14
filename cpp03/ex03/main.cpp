/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:50:04 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/14 11:54:36 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void )
{
	{
		DiamondTrap	Bob;
		Bob.whoAmI();
	}
	{
		std::cout << std::endl;
		DiamondTrap	Bob("Bob");
		DiamondTrap	clone(Bob);
		clone.whoAmI();
	}
	{
		std::cout << std::endl;
		DiamondTrap diamond("Maurice");
		diamond.guardGate();
		diamond.highFivesGuys();
		diamond.whoAmI();
		diamond.attack("Jack");
		diamond.beRepaired(500);
		diamond.takeDamage(850);
		diamond.attack("Jack");
	}
}
