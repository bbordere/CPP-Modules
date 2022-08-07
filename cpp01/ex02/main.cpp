/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:59:05 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/02 15:08:20 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Memory address of string    " << &str << std::endl;
	std::cout << "Memory address of stringPTR " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF " << &stringREF << std::endl;
	
	std::cout << "Value of string    " << str << std::endl;
	std::cout << "Value of stringPTR " << *stringPTR << std::endl;
	std::cout << "Value of stringREF " << stringREF << std::endl;

	return 0;
}
