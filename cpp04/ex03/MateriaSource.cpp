/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:09:41 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/15 15:10:19 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this->inventorySize = 0;
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	this->inventorySize = copy.getInventorySize();
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (size_t i = 0; i < this->inventorySize ; i++)
		this->inventory[i] = copy.inventory[i]->clone();
}

MateriaSource::~MateriaSource(void)
{
	for(size_t i = 0; i < this->inventorySize; i++)
		delete(this->inventory[i]);
}

size_t MateriaSource::getInventorySize(void) const
{
	return (this->inventorySize);
}

MateriaSource &MateriaSource::operator= (const MateriaSource &assign)
{
	for (size_t i = 0; i < this->inventorySize ; i++)
		delete(this->inventory[i]);
	this->inventorySize = assign.getInventorySize();
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (size_t i = 0; i < this->inventorySize ; i++)
		this->inventory[i] = assign.inventory[i]->clone();
	return (*this);
}

void MateriaSource::learnMateria(AMateria *mat)
{
	if (this->inventorySize > 3 || !mat)
		return ;
	this->inventory[this->inventorySize] = mat;
	this->inventorySize++;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for(size_t i = 0; i < this->inventorySize; i++)
		if(this->inventory[i]->getType() == type)
			return (this->inventory[i]->clone());
    return (NULL);
}
