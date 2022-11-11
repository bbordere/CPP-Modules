/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:53:28 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/11 16:59:23 by bbordere         ###   ########.fr       */
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
		maurice.getBrain()->setIdea(0, "Croquettes");
		maurice.getBrain()->setIdea(1, "Souris");
		Cat bob = Cat(maurice);
		std::cout << std::endl;
		bob.getBrain()->setIdea(1, "Arbres");
		std::cout << maurice.getBrain()->getIdea(1) << std::endl;
		std::cout << bob.getBrain()->getIdea(1) << std::endl << std::endl;
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


