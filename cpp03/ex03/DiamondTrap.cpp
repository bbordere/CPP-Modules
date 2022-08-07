/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:49:34 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/05 13:13:26 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap Default Constructor" << std::endl;
	this->name = "_clap_name";
	this->hit_pts = FragTrap::get_hit_pts();
	this->energy_pts = ScavTrap::get_energy_pts();
	this->att_dmg = FragTrap::get_att_dmg();
}

DiamondTrap::DiamondTrap(std::string name): FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap String Constructor" << std::endl;
	this->name = name;
	this->hit_pts = FragTrap::get_hit_pts();
	this->energy_pts = ScavTrap::get_energy_pts();
	this->att_dmg = FragTrap::get_att_dmg();
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy):
	ClapTrap(),
	FragTrap(copy.get_name().append("_clap_name")),
	ScavTrap(copy.get_name().append("_clap_name"))
{
	std::cout << "DiamondTrap Copy Constructor" << std::endl;
	this->name = copy.get_name();
	this->hit_pts = copy.get_hit_pts();
	this->att_dmg = copy.get_att_dmg();
	this->energy_pts = copy.get_energy_pts();
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &assign)
{
	this->name = assign.get_name();
	this->hit_pts = assign.get_hit_pts();
	this->energy_pts = assign.get_energy_pts();
	this->att_dmg = assign.get_att_dmg();
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destroyed" << std::endl;
}

std::string DiamondTrap::get_name(void) const
{
	return(this->name);
}

void DiamondTrap::whoAmI()
{
	std::cout << "\e[0;35mHi ! I'am the DiamondTrap " << this->name << ", but my ClapTrap name is " << ClapTrap::name << "\e[0m" << std::endl;
}