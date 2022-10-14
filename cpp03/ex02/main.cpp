/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:50:04 by bbordere          #+#    #+#             */
/*   Updated: 2022/10/14 14:14:59 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	{
		ScavTrap Bob("Bob");
	}
	{
		std::cout << std::endl;
		FragTrap Maurice("Maurice");
		Maurice.highFivesGuys();
		for (int i = 0; i < 11; i++)
			Maurice.attack("Bob");
		Maurice.beRepaired(51);
	}
}
