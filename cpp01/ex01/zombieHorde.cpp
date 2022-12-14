/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:38:44 by bbordere          #+#    #+#             */
/*   Updated: 2022/10/12 12:56:06 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *horde; 

	if (N <= 0)
		return (NULL);
	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].get_name() = name;
	return (horde);	
}
