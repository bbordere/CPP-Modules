/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:56:05 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/17 19:21:31 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(Cat const &copy);
		Cat &operator=(Cat const &assign);
		~Cat();

		virtual void makeSound(void) const;
};

#endif