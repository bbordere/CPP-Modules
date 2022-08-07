/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:16:11 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/11 10:48:13 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	{
	std::cout << "Creating zombie directly" << std::endl;
	Zombie	jack = Zombie("jack");
	jack.announce();
	}

	{
	std::cout << std::endl << "Creating zombie with newZombie" << std::endl;
	Zombie *bob = newZombie("Bob");
	bob->announce();
	delete bob;
	std::cout << std::endl;
	}

	{
	std::cout << "Creating random zombie with randomChump" << std::endl;
	randomChump("Alice");
	std::cout << std::endl;
	}

	return (0);
}
