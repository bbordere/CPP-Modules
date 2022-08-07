/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:24:51 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/11 16:28:48 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &copy);
		AMateria &operator=(AMateria const &assign);
		virtual ~AMateria();

		std::string const	&getType(void) const;
		virtual	AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
};

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


#endif