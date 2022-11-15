/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:49:34 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/14 13:46:05 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): 
	ClapTrap("Default_clap_name"),
	FragTrap(),
	ScavTrap()
{
	std::cout << "DiamondTrap Default Constructor" << std::endl;
	this->name = "Default";
	this->hit_pts = FragTrap::getHitPts();
	this->energy_pts = ScavTrap::getEnergyPts();
	this->att_dmg = FragTrap::getAttDmg();
}

DiamondTrap::DiamondTrap(std::string name): 
	ClapTrap(name + "_clap_name"),
	FragTrap(),
	ScavTrap()
{
	std::cout << "DiamondTrap String Constructor" << std::endl;
	this->name = name;
	this->hit_pts = FragTrap::getHitPts();
	this->energy_pts = ScavTrap::getEnergyPts();
	this->att_dmg = FragTrap::getAttDmg();
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy):
	ClapTrap(copy.getName().append("_clap_name")),
	FragTrap(),
	ScavTrap()
{
	std::cout << "DiamondTrap Copy Constructor" << std::endl;
	this->name = copy.getName();
	this->hit_pts = copy.getHitPts();
	this->energy_pts = copy.getEnergyPts();
	this->att_dmg = copy.getAttDmg();
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &assign)
{
	std::cout << "DiamondsTrap Assignment Operator" << std::endl;
	this->name = assign.getName();
	this->hit_pts = assign.getHitPts();
	this->energy_pts = assign.getEnergyPts();
	this->att_dmg = assign.getAttDmg();
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destroyed" << std::endl;
}

std::string DiamondTrap::getName(void) const
{
	return(this->name);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Hi ! I'am the DiamondTrap " << this->name << ", but my ClapTrap name is " << ClapTrap::name << std::endl;
}