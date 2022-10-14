/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:51:10 by bbordere          #+#    #+#             */
/*   Updated: 2022/10/13 14:44:43 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon	*weapon;

	public:
		HumanB(std::string name);
		~HumanB();

		void	setWeapon(Weapon &zweapon);
		void	attack(void) const;
};
