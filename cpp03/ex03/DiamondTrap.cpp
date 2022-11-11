/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:49:34 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/11 16:01:42 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Default_clap_name"), FragTrap("Default_clap_name"), ScavTrap("Default_clap_name")
{
	std::cout << "DiamondTrap Default Constructor" << std::endl;
	this->name = "Default";
	this->hit_pts = FragTrap::getHitPts();
	this->energy_pts = ScavTrap::getEnergyPts();
	this->att_dmg = FragTrap::getAttDmg();
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name") ,FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap String Constructor" << std::endl;
	this->name = name;
	this->hit_pts = FragTrap::getHitPts();
	this->energy_pts = ScavTrap::getEnergyPts();
	this->att_dmg = FragTrap::getAttDmg();
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy):
	ClapTrap(copy.getName().append("_clap_name")),
	FragTrap(copy.getName().append("_clap_name")),
	ScavTrap(copy.getName().append("_clap_name"))
{
	std::cout << "DiamondTrap Copy Constructor" << std::endl;
	this->name = copy.getName();
	this->hit_pts = copy.getHitPts();
	this->att_dmg = copy.getAttDmg();
	this->energy_pts = copy.getEnergyPts();
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
	std::cout << "DiamondTrap Destroyed" << std::endl;
}

std::string DiamondTrap::getName(void) const
{
	return(this->name);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Hi ! I'am the DiamondTrap " << this->name << ", but my ClapTrap name is " << ClapTrap::name << std::endl;
}