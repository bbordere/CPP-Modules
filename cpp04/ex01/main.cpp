/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:53:28 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/11 14:17:56 by bbordere         ###   ########.fr       */
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
		maurice.get_brain()->set_idea(0, "Croquettes");
		maurice.get_brain()->set_idea(1, "Souris");
		Cat bob = Cat(maurice);
		bob.get_brain()->set_idea(1, "Arbres");
		std::cout << maurice.get_brain()->get_idea(1) << std::endl;
		std::cout << bob.get_brain()->get_idea(1) << std::endl << std::endl;
	}	
	{
		Animal *animals[100];
		for (size_t i = 0; i < 100; i++)
		{
			if (i < 50)
				animals[i] = new Cat();
			else
				animals[i] = new Dog();
		}
		for (size_t i = 0; i < 100; i++)
		{
			std::cout << animals[i]->getType() << std::endl;
			delete animals[i];
		}
	}

	return 0;
}


