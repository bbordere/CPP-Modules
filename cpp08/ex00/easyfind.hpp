/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:03:19 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/30 18:38:44 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &container, int const toFind)
{
	typename T::iterator	res = find(container.begin(), container.end(), toFind);
	if (res == container.end())
		throw std::out_of_range("Not Found !");
	return (res);
}

#endif