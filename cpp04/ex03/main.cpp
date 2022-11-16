/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:16:25 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/16 21:40:04 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << std::endl;
		Character	*Bob = new Character("Bob");
		ICharacter	*Maurice = new Character("Maurice");

		MateriaSource	*src = new MateriaSource();
		std::cout << "src Inventory: " << src << std::endl;
		AMateria		*ice = new Ice();
		src->learnMateria(ice);
		src->learnMateria(ice);
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		std::cout << "src Inventory: " << src << std::endl;
		IMateriaSource	*src2 = new MateriaSource(*src);
		std::cout << "src2 Inventory: " << static_cast<MateriaSource *>(src) << std::endl;
		std::cout << std::endl;
		AMateria	*mat;
		mat = src->createMateria("cure");
		Bob->equip(mat);
		mat = src->createMateria("ice");
		Bob->equip(mat);
		mat = src->createMateria("cure");
		Bob->equip(mat);
		std::cout << "bob's Inventory: " << Bob << std::endl;
		Bob->unequip(2);
		delete mat;
		std::cout << "bob's Inventory: " << Bob << std::endl;
		Bob->equip(NULL);
		std::cout << "bob's Inventory: " << Bob << std::endl;
		mat = src->createMateria("damage");
		Bob->equip(mat);
		std::cout << "bob's Inventory: " << Bob << std::endl;
		Bob->unequip(-1);
		std::cout << "bob's Inventory: " << Bob << std::endl;
		Bob->unequip(2147483648);
		std::cout << "bob's Inventory: " << Bob << std::endl;
		Bob->unequip(4);
		std::cout << "bob's Inventory: " << Bob << std::endl;
		Maurice->equip(src->createMateria("ice"));
		Bob->use(0, *Maurice);
		Bob->use(1, *Maurice);
		Maurice->use(0, *Bob);
		Maurice->use(1, *Bob);





		delete Bob;
		delete Maurice;
		delete src;
		delete src2;

	}
	return 0;
}
