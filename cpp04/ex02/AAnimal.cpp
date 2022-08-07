/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:54:41 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/05 17:13:10 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal Default Constructor" << std::endl;
	this->type = "Undefined";
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}

AAnimal::AAnimal(AAnimal const &copy)
{
	std::cout << "AAnimal Copy Constructor" << std::endl;
	this->type = copy.getType();
}

AAnimal &AAnimal::operator=(AAnimal const &assign)
{
	this->type = assign.getType();
	return (*this);
}

void AAnimal::makeSound(void) const
{
	std::cout << "*Loud random sound*" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal dead" << std::endl;
}
