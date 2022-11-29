/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:01:32 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/29 13:55:27 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	upperStr(std::string &str)
{
	for (std::size_t i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
}

int main(void)
{
	{
		int tab[] = {-1, 456 , 42, 24564, 879, 3110};
		std::cout << "------------------" << std::endl;
		iter<int>(tab, 6, &printElement);
		std::cout << "------------------" << std::endl;
		iter<int>(tab, 6, &addFortyTwo<int>);
		iter<int>(tab, 6, &printElement);
		std::cout << "------------------" << std::endl;
		iter<int>(tab, 6, &substractFortyTwo);
		iter<int>(tab, 6, &printElement);
		std::cout << "------------------" << std::endl;
		std::cout << std::endl;
	}
	{
		double	tab[] = {-1.1256, 3.569, 42.423, 21.65, 698.459, -21.422};
		std::cout << "------------------" << std::endl;
		iter<double>(tab, 6, &printElement);
		std::cout << "------------------" << std::endl;
		iter<double>(tab, 6, &addFortyTwo);
		iter<double>(tab, 6, &printElement);
		std::cout << "------------------" << std::endl;
		iter<double>(tab, 6, &substractFortyTwo);
		iter<double>(tab, 6, &printElement);
		std::cout << "------------------" << std::endl;
		std::cout << std::endl;
	}
	{
		std::string	tab[] = {"Ceci", "est", "un", "message", "secret", "!"};
		std::cout << "------------------" << std::endl;
		iter<std::string>(tab, 6, &printElement);
		std::cout << "------------------" << std::endl;
		iter<std::string>(tab, 6, &upperStr);
		iter<std::string>(tab, 6, &printElement);
		std::cout << "------------------" << std::endl;
	}
}
