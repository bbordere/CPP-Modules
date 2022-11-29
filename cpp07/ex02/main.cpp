/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:01:32 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/29 14:01:01 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
# include <stdlib.h>
# include <time.h>
#include <iomanip>

#define MAX_VAL 12

int main(int, char**)
{
	std::cout << "------------------" << std::endl;
    Array<int> numbers(MAX_VAL);
	Array<double> def;
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));

	std::cout << "numbers: " << numbers << ", size = " << numbers.size() << std::endl;
	std::cout << "def: " << def << ", size = " << def.size() << std::endl;
	std::cout << "------------------" << std::endl;
 
	for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 128;
        numbers[i] = value;
        mirror[i] = value;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

	{
        Array<int> tmp = numbers;
        Array<int> test(tmp);

		std::cout << "numbers: " << numbers << std::endl;
		std::cout << "tmp:     " << tmp << std::endl;
		std::cout << "test:    " << test << std::endl;
		std::cout << std::endl;

		numbers[0] = 21;
		tmp[1] = 42;
		test[2] = 38;
		std::cout << "numbers: " << numbers << std::endl;
		std::cout << "tmp:     " << tmp << std::endl;
		std::cout << "test:    " << test << std::endl;	
		std::cout << "------------------" << std::endl;
    }

    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[50] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "------------------" << std::endl;

	for (int i = 0; i < MAX_VAL; i++)
		numbers[i] = rand() % 256;
	std::cout << numbers << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
		numbers[i] += 5;
	std::cout << numbers << std::endl;

    delete [] mirror;
    return 0;
}
