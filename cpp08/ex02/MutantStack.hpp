/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:54:34 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/30 22:10:18 by bbordere         ###   ########.fr       */
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
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack() {};

		~MutantStack() {};

		MutantStack(MutantStack const &copy): std::stack<T>(copy) {};

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

		reverse_iterator rbegin(void)
		{
			return (this->c.rbegin());
		};

		reverse_iterator rend(void)
		{
			return (this->c.rend());
		};

		
		const_iterator begin(void) const
		{
			return (this->c.begin());
		};

		const_iterator end(void) const
		{
			return (this->c.end());
		};

		const_reverse_iterator rbegin(void) const
		{
			return (this->c.rbegin());
		};

		const_reverse_iterator rend(void) const
		{
			return (this->c.rend());
		};
		
};

#endif