/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:44:52 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/06 23:25:45 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Default Constructor" << std::endl;
	this->name = "Default";
	this->hit_pts = 10;
	this->energy_pts = 10;
	this->att_dmg = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap String Constructor" << std::endl;
	this->name = name;
	this->hit_pts = 10;
	this->energy_pts = 10;
	this->att_dmg = 0;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	this->name = copy.getName();
	this->hit_pts = copy.getHitPts();
	this->att_dmg = copy.getAttDmg();
	this->energy_pts = copy.getEnergyPts();
}

ClapTrap &ClapTrap::operator=(ClapTrap const &assign)
{
	this->name = assign.getName();
	this->hit_pts = assign.getHitPts();
	this->energy_pts = assign.getEnergyPts();
	this->att_dmg = assign.getAttDmg();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destroyed" << std::endl;
}

std::string		ClapTrap::getName(void) const
{
	return (this->name);
}

unsigned int	ClapTrap::getAttDmg(void) const
{
	return (this->att_dmg);
}

unsigned int	ClapTrap::getHitPts(void) const
{
	return (this->hit_pts);
}

unsigned int	ClapTrap::getEnergyPts(void) const
{
	return (this->energy_pts);
}

void ClapTrap::attack(const std::string &target)
{
	if (!this->hit_pts)
		std::cout << "ClapTrap " << this->name << " can't attacks with 0 hit points !" << std::endl;
	else if (!this->energy_pts)
		std::cout << "ClapTrap " << this->name << " can't attacks with 0 energy points !" << std::endl;
	else
	{
		this->energy_pts--;
		std::cout << "ClapTrap " << this->name << " attacks " << target <<  ", causing " << this->att_dmg << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_pts >= amount)
		this->hit_pts -= amount;
	else
		this->hit_pts = 0;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " damage points. New hit points : " << this->hit_pts << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->hit_pts)
		std::cout << "ClapTrap " << this->name << " can't attacks with 0 hit points !" << std::endl;
	else if (!this->energy_pts)
		std::cout << "ClapTrap " << this->name << " can't attacks with 0 energy points !" << std::endl;
	else
	{
		if (amount > 4294967295 - this->hit_pts)
			this->hit_pts = 4294967295;
		else
			this->hit_pts += amount;
		this->energy_pts--;
		std::cout << "ClapTrap " << this->name << " regained " << amount << " hit points. New hit points : " << this->hit_pts << std::endl;
	}
}