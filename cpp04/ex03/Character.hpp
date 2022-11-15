/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:11:43 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/15 15:07:32 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		AMateria		*inventory[4];
		std::string		name;
		size_t			inventorySize;
		
	public:
		Character();
		Character(std::string name);
		Character(Character const &copy);
		Character &operator=(Character const &assign);
		~Character();
		std::string const & getName() const;
		size_t						getInventorySize(void) const;

		void equip(AMateria* mat);
		void unequip(int i);
		void use(int i, ICharacter &target);
};

#endif