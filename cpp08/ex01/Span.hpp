/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:58:39 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/30 18:46:23 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <vector>
#include <algorithm>
#include <iterator>
#include <stack>

class Span
{
	private:
		unsigned int size;
		std::vector<int> span;
	
	public:
		Span();
		Span(unsigned int n);
		Span(Span const &copy);
		Span &operator=(Span const &assign);
		~Span();
		unsigned int	getSize(void) const;
		void			addNumber(int n);
		unsigned int	longestSpan(void) const;
		unsigned int	shortestSpan(void) const;
		void			fillSpan(std::vector<int>::iterator start, std::vector<int>::iterator end);

		class OutOfRangeException: public std::exception
		{
			virtual const char *what(void) const throw();
		};
		class DistanceNotFoundException: public std::exception
		{
			virtual const char *what(void) const throw();
		};
};

#endif