/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:53:28 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/17 16:28:13 by bbordere         ###   ########.fr       */
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
		Dog *Pluto = new Dog();
		std::cout << std::endl;
		Cat	*Garfield = new Cat();
		std::cout << std::endl;
		std::cout << "Pluto: ";
		Pluto->makeSound();
		std::cout << "Garfield: ";
		Garfield->makeSound();
		std::cout << std::endl;
		delete(Pluto);
		std::cout << std::endl;
		delete(Garfield);
	}
	{	
		std::cout << std::endl;
		const Animal* meta = new Animal();
		std::cout << std::endl;
		const Animal* dog = new Dog();
		std::cout << std::endl;
		const Animal* cat = new Cat();
		std::cout << std::endl;
		std::cout << "meta's type is: " << meta->getType() << " " << std::endl;
		std::cout << "dog's type is: " << dog->getType() << " " << std::endl;
		std::cout << "cat's type is: " << cat->getType() << " " << std::endl;
		std::cout << std::endl;
		std::cout << "meta's sound is: ";
		meta->makeSound();
		std::cout << "dog's sound is: ";
		dog->makeSound();
		std::cout << "cat's sound is: ";
		cat->makeSound();
		std::cout << std::endl;
		delete(meta);
		std::cout << std::endl;
		delete(dog);
		std::cout << std::endl;
		delete(cat);
	}
	{
		std::cout << std::endl;
		WrongCat *w_cat = new WrongCat();
		std::cout << std::endl;
		w_cat->makeSound();
		std::cout << std::endl;
		delete (w_cat);
	}
	{
		std::cout << std::endl;
		const WrongAnimal* w_meta = new WrongAnimal();
		std::cout << std::endl;
		const WrongAnimal* w_cat = new WrongCat();
		std::cout << std::endl;
		std::cout << "w_meta's type is: " << w_meta->getType() << " " << std::endl;
		std::cout << "w_cat's type is: " << w_cat->getType() << " " << std::endl;
		std::cout << std::endl;
		std::cout << "w_meta's sound is: ";
		w_cat->makeSound();
		std::cout << "w_cat's sound is: ";
		w_meta->makeSound();
		std::cout << std::endl;
		delete(w_meta);
		std::cout << std::endl;
		delete(w_cat);
	}
	return 0;
}


