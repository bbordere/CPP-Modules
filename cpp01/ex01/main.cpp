/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:16:11 by bbordere          #+#    #+#             */
/*   Updated: 2022/10/13 14:34:36 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int number = 10;

	{
		std::cout << "Creating Zombie horde" << std::endl;
		Zombie *horde = zombieHorde(number, "Bob");
		if (horde)
		{
			for (int i = 0; i < number; i++)
				horde[i].announce();
			delete []horde;
		}
		else
			std::cout << "Can't create horde !" << std::endl;
	}
	{
		std::cout << "Creating big horde " << std::endl;
		number = 50;
		Zombie *horde = zombieHorde(number, "Maurice");
		if (horde)
		{
			for (int i = 0; i < number; i++)
				horde[i].announce();
			delete []horde;
		}
		else
			std::cout << "Can't create horde !" << std::endl;
	}
	{
		std::cout << "Creating invalid horde " << std::endl;
		number = -5;
		Zombie *horde = zombieHorde(number, "Jules");
		if (!horde)
			std::cout << "Can't create horde !" << std::endl;
		else
			horde->announce();

	}
	return (0);
}
