/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:55:48 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/05 15:15:45 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default Constructor" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	this->type = copy.getType();
}

Dog &Dog::operator=(Dog const &assign)
{
	this->type = assign.getType();
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog dead" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Wouaf" << std::endl;
}