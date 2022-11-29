/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:40:27 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/29 13:54:05 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <iostream>

template<typename T>
void	iter(T *tab, std::size_t size, void (*fct)(T &element))
{
	for (std::size_t i = 0; i < size; i++)
		fct(tab[i]);	
}

template<typename T>
void	printElement(T &element)
{
	std::cout << element << std::endl;
}

template<typename T>
void	addFortyTwo(T &element)
{
	element += static_cast<T>(42);
}

template<typename T>
void	substractFortyTwo(T &element)
{
	element -= static_cast<T>(42);
}

#endif