/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:16:25 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/16 14:32:25 by bbordere         ###   ########.fr       */
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
		IMateriaSource	*src = new MateriaSource();
		std::cout << "Materia Inventory: " << static_cast<MateriaSource *>(src) << std::endl;
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		std::cout << "Materia Inventory: " << static_cast<MateriaSource *>(src) << std::endl;
		src->learnMateria(new Ice());
		std::cout << "Materia Inventory: " << static_cast<MateriaSource *>(src) << std::endl;
	}
	return 0;
}
