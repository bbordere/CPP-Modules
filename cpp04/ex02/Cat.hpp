/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:56:05 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/11 16:48:57 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(Cat const &copy);
		Cat &operator=(Cat const &assign);
		~Cat();

		void 	makeSound(void) const;
		Brain	*getBrain(void) const;
};

#endif