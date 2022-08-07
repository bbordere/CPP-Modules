/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:58:15 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/11 16:40:32 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
#define __ICE_HPP__

#include <iostream>

#include "AMateria.hpp"

class AMateria;

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &copy);
		Ice & operator=(const Ice &assign);
		~Ice();

		virtual AMateria *clone() const;
		virtual void use(ICharacter& target);
};

Ice::Ice()
{
	this->type = "ice";
}

Ice::Ice(Ice const &copy): AMateria("ice")
{
	*this = copy;
}

Ice::~Ice()
{
}

Ice &Ice::operator=(Ice const &assign)
{
	this->type = assign.getType();
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

#endif