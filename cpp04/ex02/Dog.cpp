/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:55:48 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/17 16:32:06 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default Constructor" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const &copy): AAnimal(copy)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	this->type = copy.getType();
	this->brain = new Brain(*(copy.getBrain()));
}

Dog &Dog::operator=(Dog const &assign)
{
	std::cout << "Dog Assignment Operator" << std::endl;
	if (this->brain)
		delete this->brain;
	this->type = assign.getType();
	this->brain = new Brain(*(assign.getBrain()));
	return (*this);
}

Dog::~Dog()
{
	delete(brain);
	std::cout << "Dog dead" << std::endl;
}

Brain *Dog::getBrain(void) const
{
	return (this->brain);
}

void Dog::makeSound(void) const
{
	std::cout << "Wouaf" << std::endl;
}