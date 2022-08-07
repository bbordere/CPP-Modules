/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:29:29 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/05 13:14:27 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << "FragTrap Default Constructor" << std::endl;
	this->hit_pts = 100;
	this->energy_pts = 100;
	this->att_dmg = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap String Constructor" << std::endl;
	this->hit_pts = 100;
	this->energy_pts = 100;
	this->att_dmg = 30;
	this->name = name;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy)
{
	std::cout << "FragTrap Copy Constructor" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &assign)
{
	this->name = assign.get_name();
	this->hit_pts = assign.get_hit_pts();
	this->energy_pts = assign.get_energy_pts();
	this->att_dmg = assign.get_att_dmg();
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->hit_pts == 0)
		std::cout << "FragTrap " << this->name << " can't high five with 0 hit points" << std::endl;
	else
		std::cout << "FragTrap " << this->name << " is giving high five" << std::endl;
}
