/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:58:15 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/11 16:33:17 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
#define __CURE_HPP__

#include <iostream>

#include "AMateria.hpp"

class AMateria;

class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure &copy);
		Cure & operator=(const Cure &assign);
		~Cure();

		AMateria* clone() const;
		void use(ICharacter& target);
};

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(Cure const &copy): AMateria("cure")
{
	this->type = copy.getType();
}

Cure::~Cure()
{
}

Cure & Cure::operator=(Cure const &assign)
{
	this->type = assign.getType();
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

#endif