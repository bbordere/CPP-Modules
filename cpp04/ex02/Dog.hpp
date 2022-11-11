/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:09:09 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/11 16:48:57 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	private:
		Brain *brain;

	public:
		Dog();
		Dog(Dog const &copy);
		Dog &operator=(Dog const &assign);
		~Dog();

		Brain *getBrain(void) const;
		void makeSound(void) const;
};

#endif