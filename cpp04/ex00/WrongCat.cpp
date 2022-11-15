/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:32:06 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/15 11:19:21 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Default Constructor" << std::endl;
	this->type = "Wrong Cat";
}

WrongCat::WrongCat(WrongCat const &copy): WrongAnimal(copy)
{
	std::cout << "WrongCat Copy Constructor" << std::endl;
	this->type = copy.getType();
}

WrongCat &WrongCat::operator=(WrongCat const &assign)
{
	std::cout << "WrongCat Assignment Operator" << std::endl;
	this->type = assign.getType();
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "MEOOOOOOOOOOOOW" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat dead" << std::endl;
}