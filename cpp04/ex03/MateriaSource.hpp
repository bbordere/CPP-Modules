/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:05:36 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/15 15:10:16 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIA_HPP__
#define __MATERIA_HPP__

#include "IMateriaSource.hpp"

class MateriaSource:public IMateriaSource
{
	private:
		AMateria		*inventory[4];
        size_t			inventorySize;

	public:
        MateriaSource();
        MateriaSource(MateriaSource const &copy);
        MateriaSource       &operator=(MateriaSource const &assign);
        ~MateriaSource(void);

		size_t				getInventorySize(void) const;
        void        learnMateria(AMateria *mat);
        AMateria    *createMateria(std::string const &type);
};

#endif