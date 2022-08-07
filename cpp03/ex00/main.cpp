/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:50:04 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/11 13:59:02 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
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
