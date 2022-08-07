/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:42:18 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/18 11:11:49 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <iomanip>

int main()
{
	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	
	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		std::list<int> mstack;
		mstack.push_front(5);
		mstack.push_front(17);
		std::cout << mstack.front() << std::endl << std::endl;
		mstack.pop_front();
		std::cout << mstack.size() << std::endl << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		MutantStack<int> mstack;
		for(int i = 0; i < 10; i++)
			mstack.push(i);
		for(int i = 0; i < 10; i++)
		{
			std::cout << mstack.top() << std::endl;
			mstack.pop();
		}
	}

	return 0;
}
