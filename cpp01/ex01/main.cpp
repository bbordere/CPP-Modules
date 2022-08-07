/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:16:11 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/11 10:58:58 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int number = 10;

	{
		std::cout << "Creating Zombie horde" << std::endl;
		Zombie *horde = zombieHorde(number, "Bob");
		for (int i = 0; i < number; i++)
			horde[i].announce();
		delete []horde;
	}
	{
		std::cout << "Creating big horde " << std::endl;
		number = 500;
		Zombie *horde = zombieHorde(number, "Maurice");
		for (int i = 0; i < number; i++)
			horde[i].announce();
		delete []horde;		
	}

	return (0);
}
