/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:00:47 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/16 13:12:10 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMATERIA_HPP__
#define __IMATERIA_HPP__

#include "AMateria.hpp"

class AMateria;

class IMateriaSource
{
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif