/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:00:43 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/10 20:17:47 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	std::cout << "ScavTrap Default Constructor" << std::endl;
	this->hit_pts = 100;
	this->energy_pts = 50;
	this->att_dmg = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap String Constructor" << std::endl;
	this->hit_pts = 100;
	this->energy_pts = 50;
	this->att_dmg = 20;
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy)
{
	std::cout << "ScavTrap Copy Constructor" << std::endl;
	this->hit_pts = copy.getHitPts();
	this->energy_pts = copy.getEnergyPts();
	this->att_dmg = copy.getAttDmg();
}

ScavTrap &ScavTrap::operator=(ScavTrap const &assign)
{
	this->name = assign.getName();
	this->hit_pts = assign.getHitPts();
	this->energy_pts = assign.getEnergyPts();
	this->att_dmg = assign.getAttDmg();
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destroyed" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (!this->hit_pts)
		std::cout << "ScavTrap " << this->name << " can't attacks with 0 hit points !" << std::endl;
	else if (!this->energy_pts)
		std::cout << "ScavTrap " << this->name << " can't attacks with 0 energy points !" << std::endl;
	else
	{
		this->energy_pts--;
		std::cout << "ScavTrap " << this->name << " attacks " << target <<  ", causing " << this->att_dmg << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate(void)
{
	if (this->hit_pts == 0)
		std::cout << "ScavTrap " << this->name << " can't entered in gate keeper mode with 0 hit points" << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " is entered in gate keeper mode" << std::endl;
}