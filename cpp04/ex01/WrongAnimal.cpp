/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:27:17 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/15 11:19:26 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default Constructor" << std::endl;
	this->type = "Undefined";
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal Copy Constructor" << std::endl;
	this->type = copy.getType();
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &assign)
{
	std::cout << "WrongAnimal Assignment Operator" << std::endl;
	this->type = assign.getType();
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "*Loud wrong random sound*" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal dead" << std::endl;
}
