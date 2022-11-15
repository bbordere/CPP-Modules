/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:11:48 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/15 15:11:55 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "Default type";
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria	&AMateria::operator=(const AMateria & copy)
{
	this->type = copy.getType();
	return (*this);
}

std::string const &AMateria::getType(void) const
{
	return (this->type);
}

AMateria::AMateria(AMateria const &copy)
{
	this->type = copy.getType();
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
}

AMateria::~AMateria()
{
}