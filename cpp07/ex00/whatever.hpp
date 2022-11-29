/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:40:27 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/29 13:45:45 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP__
#define __WHATEVER_HPP__

template<typename T>
T const &max(T const &x, T const &y)
{
	return (x > y ? x : y);
}

template<typename T>
T const &min(T const &x, T const &y)
{
	return (x < y ? x : y);
}

template<typename T>
void swap(T &x, T &y)
{
	T temp = x;
	x = y;
	y = temp;
}

#endif