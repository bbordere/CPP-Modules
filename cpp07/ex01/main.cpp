/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:01:32 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/27 12:20:36 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	printElement(int &element)
{
	std::cout << "\"" << element << "\"" << std::endl;
}

void	addFortyTwo(int &element)
{
	element += 42;
}

void	substractFortyTwo(int &element)
{
	element -= 42;
}

int main(void)
{
	int tab[] = {-1, 456 , 42, 24564, 879, 3110};
	std::cout << "------------------" << std::endl;
	iter<int>(tab, 6, &printElement);
	std::cout << "------------------" << std::endl;
	iter<int>(tab, 6, &addFortyTwo);
	iter<int>(tab, 6, &printElement);
	std::cout << "------------------" << std::endl;
	iter<int>(tab, 6, &substractFortyTwo);
	iter<int>(tab, 6, &printElement);
	std::cout << "------------------" << std::endl;
}
