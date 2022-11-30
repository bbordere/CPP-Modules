/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:31:51 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/30 18:35:34 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <list>
#include <deque>

int main(void)
{
	{
		std::cout << "------------------" << std::endl;
		std::cout << "Vector: " << std::endl << std::endl;
		std::vector<int> vector;
		for (size_t i = 0; i < 50; i++)
			vector.push_back(i);
		try
		{
			std::vector<int>::iterator t = easyfind(vector, 5);
			std::cout << "Searching 5: " << std::endl;
			std::cout << "Find occurence at index: " << *t << std::endl << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl<< std::endl;
		}
		
		try
		{
			std::cout << "Searching 789: " << std::endl;
			std::vector<int>::iterator t = easyfind(vector, 789);
			std::cout << "Find occurence at index: " << *t << std::endl << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	
	{
		std::cout << "------------------" << std::endl;
		std::cout << "List: " << std::endl << std::endl;
		std::list<int> list;
		for (size_t i = 0; i < 50; i++)
			list.push_back(i);
		try
		{
			std::list<int>::iterator t = easyfind(list, 5);
			std::cout << "Searching 5: " << std::endl;
			std::cout << "Find occurence at index: " << *t << std::endl << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl<< std::endl;
		}
		
		try
		{
			std::cout << "Searching 789: " << std::endl;
			std::list<int>::iterator t = easyfind(list, 789);
			std::cout << "Find occurence at index: " << *t << std::endl << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}

	{
		std::cout << "------------------" << std::endl;
		std::cout << "Deque: " << std::endl << std::endl;
		std::deque<int> deque;
		for (size_t i = 0; i < 50; i++)
			deque.push_back(i);
		try
		{
			std::deque<int>::iterator t = easyfind(deque, 5);
			std::cout << "Searching 5: " << std::endl;
			std::cout << "Find occurence at index: " << *t << std::endl << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl<< std::endl;
		}
		
		try
		{
			std::cout << "Searching 789: " << std::endl;
			std::deque<int>::iterator t = easyfind(deque, 789);
			std::cout << "Find occurence at index: " << *t << std::endl << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
		std::cout << "------------------" << std::endl;
	}
			
	return 0;
}
