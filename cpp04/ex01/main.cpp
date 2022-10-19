/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:53:28 by bbordere          #+#    #+#             */
/*   Updated: 2022/10/19 14:58:47 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{	

	{
		std::cout << "---TEST COPY---" << std::endl;
		Cat maurice = Cat();
		maurice.get_brain()->setIdea(0, "Croquettes");
		maurice.get_brain()->setIdea(1, "Souris");
		Cat bob = Cat(maurice);
		bob.get_brain()->setIdea(1, "Arbres");
		std::cout << maurice.get_brain()->getIdea(1) << std::endl;
		std::cout << bob.get_brain()->getIdea(1) << std::endl << std::endl;
	}	
	{
		int const N = 10;
		Animal *animals[N];
		for (size_t i = 0; i < N; i++)
		{
			if (i < N / 2)
				animals[i] = new Cat();
			else
				animals[i] = new Dog();
		}
		for (size_t i = 0; i < N; i++)
		{
			std::cout << animals[i]->getType() << std::endl;
			delete animals[i];
		}
	}

	return 0;
}


