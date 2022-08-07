/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:50:04 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/05 11:23:45 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	Bob("Bob");
	ScavTrap	Jack("Jack");
	
	Bob.attack("Alice");
	Jack.attack("Maurice");
	Jack.guardGate();

	Bob.beRepaired(1);
	Bob.beRepaired(3);

	Bob.takeDamage(1);
	Bob.takeDamage(3);

	Jack.takeDamage(500);
	Jack.attack("Zombie");
	Jack.guardGate();

}
