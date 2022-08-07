/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:56:02 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/05 15:17:55 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default Constructor" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	std::cout << "Cat Copy Constructor" << std::endl;
	this->type = copy.getType();
}

Cat &Cat::operator=(Cat const &assign)
{
	this->type = assign.getType();
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat dead" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
