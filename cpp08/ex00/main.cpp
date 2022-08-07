/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:31:51 by bbordere          #+#    #+#             */
/*   Updated: 2022/08/07 23:37:48 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <list>

int main(void)
{
	{
		std::vector<int> vector;
		for (size_t i = 0; i < 50; i++)
			vector.push_back(i);
		try
		{
			std::vector<int>::iterator t = easyfind(vector, 5);
			std::cout << "Find occurence at " << *t << std::endl;
		}
		catch(const NotFoundException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::vector<int>::iterator t = easyfind(vector, 789);
			std::cout << "Find occurence at " << *t << std::endl;
		}
		catch(const NotFoundException& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::list<int> list;
		for (size_t i = 0; i < 50; i++)
			list.push_back(i);
		try
		{
			std::list<int>::iterator t = easyfind(list, 38);
			std::cout << "Find occurence at " << *t << std::endl;
		}
		catch(const NotFoundException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::list<int>::iterator t = easyfind(list, 789);
			std::cout << "Find occurence at " << *t << std::endl;
		}
		catch(const NotFoundException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}
			
	return 0;
}
