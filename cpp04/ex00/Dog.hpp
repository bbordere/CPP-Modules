/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:09:09 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/17 19:21:27 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog const &copy);
		Dog &operator=(Dog const &assign);
		~Dog();

		virtual void makeSound(void) const;
};

#endif