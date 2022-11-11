/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:53:28 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/11 16:58:48 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{	
	{	
		const Animal* meta = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		std::cout << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		std::cout << std::endl;
		meta->makeSound();
		dog->makeSound();
		cat->makeSound();
		std::cout << std::endl;
		delete(meta);
		delete(dog);
		delete(cat);
	}
	{
		std::cout << std::endl;
		const WrongAnimal* w_meta = new WrongAnimal();
		const WrongAnimal* w_cat = new WrongCat();
		std::cout << w_cat->getType() << " " << std::endl;
		w_cat->makeSound();
		w_meta->makeSound();
		delete(w_meta);
		delete(w_cat);
	}
	return 0;
}


