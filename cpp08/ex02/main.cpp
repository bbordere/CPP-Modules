/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:42:18 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/30 23:17:29 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <iomanip>

int main()
{
	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		std::cout << "Mutant Stack" << std::endl << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "Top value: " << mstack.top() << std::endl << std::endl;
		std::cout << "Size: " << mstack.size() << std::endl << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		std::cout << "Size: " << mstack.size() << std::endl << std::endl;

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		std::cout << "From bottom to top: " << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl;

		MutantStack<int>::reverse_iterator rit = mstack.rbegin();
		MutantStack<int>::reverse_iterator rite = mstack.rend();

		++rit;
		--rit;

		std::cout << "From top to bottom: " << std::endl;
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}

		std::cout << std::endl;
		std::stack<int> s(mstack);

		std::cout << "Top value: " << mstack.top() << std::endl;
		std::cout << "Popping !" << std::endl;
		mstack.pop();	
		std::cout << "Top value: " << mstack.top() << std::endl << std::endl;
	}
	
	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		std::cout << "std::list" << std::endl << std::endl;

		std::list<int> list;

		list.push_front(5);
		list.push_front(17);

		std::cout << "Front value: " << list.front() << std::endl << std::endl;
		std::cout << "Size: " << list.size() << std::endl << std::endl;

		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		list.push_back(0);

		std::cout << "Size: " << list.size() << std::endl << std::endl;
	
		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();

		++it;
		--it;

		std::cout << "From front to back: " << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl;

		std::list<int>::reverse_iterator rit = list.rbegin();
		std::list<int>::reverse_iterator rite = list.rend();

		++rit;
		--rit;

		std::cout << "From back to front: " << std::endl;
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}

		std::cout << std::endl;
		std::cout << "Back value: " << list.back() << std::endl;
		std::cout << "Popping !" << std::endl;
		list.pop_back();	
		std::cout << "Back value: " << list.back() << std::endl << std::endl;
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
