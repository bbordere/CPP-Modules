/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:24:51 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/15 15:11:31 by bbordere         ###   ########.fr       */
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

#endif