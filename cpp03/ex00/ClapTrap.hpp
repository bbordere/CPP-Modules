/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:44:57 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/06 23:25:46 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <iostream>

class ClapTrap
{
	private:
		std::string		name;
		unsigned int	hit_pts;
		unsigned int	energy_pts;
		unsigned int	att_dmg;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &copy);
		ClapTrap &operator=(ClapTrap const &assign);
		~ClapTrap();

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amout);

		unsigned int	getHitPts(void) const;
		unsigned int	getEnergyPts(void) const;
		unsigned int	getAttDmg(void) const;
		std::string		getName(void) const;
};

#endif 