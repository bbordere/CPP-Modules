/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:56:02 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/17 19:39:25 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default Constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	std::cout << "Cat Copy Constructor" << std::endl;
	this->type = copy.getType();
	this->brain = new Brain(*(copy.getBrain()));
}

Cat &Cat::operator=(Cat const &assign)
{
	std::cout << "Cat Assignment Operator" << std::endl;
	if (this->brain)
		delete this->brain;
	this->type = assign.getType();
	this->brain = new Brain(*(assign.getBrain()));
	return (*this);
}

Cat::~Cat()
{
	delete(this->brain);
	std::cout << "Cat dead" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return (this->brain);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
