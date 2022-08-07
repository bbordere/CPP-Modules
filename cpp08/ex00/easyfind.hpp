/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:03:19 by bbordere          #+#    #+#             */
/*   Updated: 2022/08/07 23:34:10 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

#include <algorithm>
#include <exception>

class NotFoundException: std::exception
{
	public:
		virtual const char *what(void) const throw()
		{return ("Not found !");}
};

template <typename T>
typename T::iterator easyfind(T &container, int const toFind)
{
	typename T::iterator	res = find(container.begin(), container.end(), toFind);
	if (res != container.end())
		return (res);
	throw NotFoundException();
	return (container.end());
}

#endif