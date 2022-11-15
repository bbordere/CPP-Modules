/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:58:15 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/15 15:49:41 by bbordere         ###   ########.fr       */
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

#endif