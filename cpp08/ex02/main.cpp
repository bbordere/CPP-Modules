/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:42:18 by bbordere          #+#    #+#             */
/*   Updated: 2022/12/01 20:05:47 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <iomanip>
#include <vector>

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
		std::cout << "Adding 4 values" << std::endl << std::endl;

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
		std::stack<int> s(mstack);

		std::cout << "Top value: " << mstack.top() << std::endl;
		std::cout << "Popping !" << std::endl;
		mstack.pop();	
		std::cout << "Top value: " << mstack.top() << std::endl;
	}
	
	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		std::cout << "std::list" << std::endl << std::endl;

		std::list<int> list;

		list.push_back(5);
		list.push_back(17);

		std::cout << "Back value: " << list.back() << std::endl << std::endl;
		std::cout << "Size: " << list.size() << std::endl << std::endl;
		std::cout << "Adding 4 values" << std::endl << std::endl;
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
		std::cout << "Back value: " << list.back() << std::endl;
		std::cout << "Popping !" << std::endl;
		list.pop_back();	
		std::cout << "Back value: " << list.back() << std::endl;
	}

	{
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		MutantStack<int> mstack;

		for(int i = 0; i < 10; i++)
			mstack.push(i);

		MutantStack<int> mstack2(mstack);		
		MutantStack<int> mstack3 = mstack2;

		std::cout << "Testing copy and assignment:" << std::endl;
		std::cout << ((mstack == mstack2 && mstack == mstack3 && mstack2 == mstack3) ? "All stacks are same" : "Some stacks are differents") << std::endl;
	
		std::cout << std::setw(20) << std::setfill('-') << '\n';
		MutantStack<int>::const_iterator it = mstack.begin();
		std::cout << (mstack.empty() ? "MStack is empty" : "MStack isn't empty") << std::endl << std::endl;
		while (it != mstack.end())
		{
			std::cout << "Top value: " << mstack.top() << std::endl;
			mstack.pop();
		}
		std::cout << std::endl;
		std::cout << (mstack.empty() ? "MStack is empty" : "MStack isn't empty") << std::endl;
		std::cout << std::setw(20) << std::setfill('-') << '\n';
	}
	{
		MutantStack<std::string, std::vector<std::string> > mstack;
		mstack.push("Ceci");	
		mstack.push("est");
		mstack.push("un");
		mstack.push("test");
		mstack.push("!");
		MutantStack<std::string, std::vector<std::string> >::const_iterator	it = mstack.begin();
		while (it != mstack.end())
		{
			std::cout << *it << std::endl;
			it++;
		}
		std::cout << std::setw(20) << std::setfill('-') << '\n';
	}

	return 0;
}
