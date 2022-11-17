/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:53:28 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/17 19:58:44 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	// AAnimal wrong = AAnimal();
	{
		Cat maurice = Cat();
		maurice.getBrain()->setIdea(0, "Croquettes");
		maurice.getBrain()->setIdea(1, "Souris");
		Cat bob = Cat(maurice);
		std::cout << std::endl;
		std::cout << "Maurice's Brain: " << maurice.getBrain() << std::endl;
		std::cout << "Bob's Brain: " << bob.getBrain() << std::endl;
		bob.getBrain()->setIdea(1, "Arbres");
		std::cout << std::endl;
		std::cout << "Maurice's Brain: " << maurice.getBrain() << std::endl;
		std::cout << "Bob's Brain: " << bob.getBrain() << std::endl;
		std::cout << std::endl;
		bob.getBrain()->setIdea(0, "Oiseaux");
		std::cout << "Maurice's Brain: " << maurice.getBrain() << std::endl;
		std::cout << "Bob's Brain: " << bob.getBrain() << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		Cat maurice = Cat();
		maurice.getBrain()->setIdea(0, "Croquettes");
		maurice.getBrain()->setIdea(1, "Souris");
		Cat bob;
		bob = maurice;
		std::cout << std::endl;
		std::cout << "Maurice's Brain: " << maurice.getBrain() << std::endl;
		std::cout << "Bob's Brain: " << bob.getBrain() << std::endl;
		bob.getBrain()->setIdea(1, "Arbres");
		std::cout << std::endl;
		std::cout << "Maurice's Brain: " << maurice.getBrain() << std::endl;
		std::cout << "Bob's Brain: " << bob.getBrain() << std::endl;
		std::cout << std::endl;
		bob.getBrain()->setIdea(0, "Oiseaux");
		std::cout << "Maurice's Brain: " << maurice.getBrain() << std::endl;
		std::cout << "Bob's Brain: " << bob.getBrain() << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		int const N = 10;
		AAnimal *animals[N];
		for (size_t i = 0; i < N; i++)
		{
			if (i < N / 2)
				animals[i] = new Cat();
			else
				animals[i] = new Dog();
			std::cout << std::endl;	
		}
		for (size_t i = 0; i < N; i++)
			std::cout << "Animal at index " << i << " is a " << animals[i]->getType() << std::endl;
		std::cout << std::endl;
		for (size_t i = 0; i < N; i++)
			delete animals[i];
	}
	return 0;
}


