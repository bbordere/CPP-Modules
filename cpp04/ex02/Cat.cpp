/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:56:02 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/05 17:13:31 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default Constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &copy): AAnimal(copy)
{
	std::cout << "Cat Copy Constructor" << std::endl;
	this->type = copy.getType();
	this->brain = new Brain(*(copy.get_brain()));
}

Cat &Cat::operator=(Cat const &assign)
{
	this->type = assign.getType();
	this->brain = new Brain(*(assign.get_brain()));
	return (*this);
}

Cat::~Cat()
{
	delete(this->brain);
	std::cout << "Cat dead" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

Brain *Cat::get_brain(void) const
{
	return (this->brain);
}