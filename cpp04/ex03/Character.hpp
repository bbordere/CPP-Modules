/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:11:43 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/11 16:40:50 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		AMateria		*inventory[4];
		std::string		name;
		size_t			inventorySize;
		
	public:
		Character();
		Character(std::string name);
		Character(Character const &copy);
		Character &operator=(Character const &assign);
		virtual ~Character();
		virtual std::string const & getName() const;
		size_t						getInventorySize(void) const;

		virtual void equip(AMateria* mat);
		virtual void unequip(int i);
		virtual void use(int i, ICharacter &target);
};

Character::Character()
{
	this->inventorySize = 0;
	this->name = "Default name";
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;	
}

Character::Character(std::string name)
{
	this->inventorySize = 0;
	this->name = name;
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

size_t Character::getInventorySize(void) const
{
	return (this->inventorySize);
}

std::string	const &Character::getName(void) const
{
	return (this->name);
}

Character::Character(Character const &copy)
{
	for (size_t i = 0; i < this->inventorySize ; i++)
		delete(this->inventory[i]);
	this->inventorySize = copy.getInventorySize();
	this->name = copy.getName();
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (size_t i = 0; i < this->inventorySize ; i++)
		this->inventory[i] = copy.inventory[i]->clone();
}

Character &Character::operator=(Character const &assign)
{
	for (size_t i = 0; i < this->inventorySize ; i++)
		delete(this->inventory[i]);
	this->inventorySize = assign.getInventorySize();
	this->name = assign.getName();
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (size_t i = 0; i < this->inventorySize ; i++)
		this->inventory[i] = assign.inventory[i]->clone();
	return (*this);
}

void	Character::equip(AMateria *mat)
{
	if (this->inventorySize > 3 || !mat)
		return ;
	this->inventory[this->inventorySize] = mat;
	this->inventorySize++;
}

void	Character::unequip(int i)
{
	if (i < 0)
		return ;
	for (size_t j = static_cast<size_t>(i + 1); j < this->inventorySize ; j++)
		this->inventory[j - 1] = this->inventory[j];
	this->inventory[this->inventorySize - 1] = NULL;
	this->inventorySize--;
}

void	Character::use(int i, ICharacter &target)
{
	if (i >= 0 && static_cast <size_t>(i) < this->inventorySize)
		this->inventory[i]->use(target);
}

Character::~Character()
{
}


#endif