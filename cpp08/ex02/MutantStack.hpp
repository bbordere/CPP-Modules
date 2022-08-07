/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:54:34 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/09 11:08:41 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack()
		{
			
		};

		~MutantStack()
		{

		};

		MutantStack(MutantStack const &copy): std::stack<T>(copy)
		{
			
		};

		MutantStack &operator=(MutantStack const &assign)
		{
			this->c = assign.c;
			return (*this);
		};
		
		iterator begin(void)
		{
			return (this->c.begin());
		};

		iterator end(void)
		{
			return (this->c.end());
		};
		
};

#endif