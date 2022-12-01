/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:54:34 by bbordere          #+#    #+#             */
/*   Updated: 2022/12/01 19:48:31 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
	public:
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;

		MutantStack(): std::stack<T, Container>() {};

		~MutantStack() {};

		MutantStack(MutantStack const &copy): std::stack<T, Container>(copy) {};

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
		
		const_iterator begin(void) const
		{
			return (this->c.begin());
		};

		const_iterator end(void) const
		{
			return (this->c.end());
		};
};

#endif