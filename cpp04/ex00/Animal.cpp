/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:54:41 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/15 10:43:26 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default Constructor" << std::endl;
	this->type = "Undefined";
}

std::string Animal::getType(void) const
{
	return (this->type);
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal Copy Constructor" << std::endl;
	this->type = copy.getType();
}

Animal &Animal::operator=(Animal const &assign)
{
	std::cout << "Animal Assignment Operator" << std::endl;
	this->type = assign.getType();
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "*Loud random sound*" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal dead" << std::endl;
}
