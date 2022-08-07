/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:55:48 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/05 17:13:22 by bbordere         ###   ########.fr       */
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
	this->brain = new Brain(*(copy.get_brain()));
}

Dog &Dog::operator=(Dog const &assign)
{
	this->type = assign.getType();
	this->brain = new Brain(*(assign.get_brain()));
	return (*this);
}

Dog::~Dog()
{
	delete(brain);
	std::cout << "Dog dead" << std::endl;
}

Brain *Dog::get_brain(void) const
{
	return (this->brain);
}

void Dog::makeSound(void) const
{
	std::cout << "Wouaf" << std::endl;
}