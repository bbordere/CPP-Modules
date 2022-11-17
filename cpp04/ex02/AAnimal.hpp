/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:46:11 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/17 19:58:15 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(AAnimal const &copy);
		AAnimal &operator=(AAnimal const &assign);
		virtual ~AAnimal();

		std::string getType(void) const;
		virtual void makeSound(void) const = 0;
};

#endif