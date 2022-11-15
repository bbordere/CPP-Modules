/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:58:15 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/15 15:14:56 by bbordere         ###   ########.fr       */
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

		AMateria *clone() const;
		void use(ICharacter& target);
};

#endif