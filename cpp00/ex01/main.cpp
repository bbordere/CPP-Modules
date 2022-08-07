/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:34:04 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/01 21:53:30 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook PhoneBook;
	std::string input;

	while (true)
	{
		std::cout << "PhoneBook> ";
		getline(std::cin, input);
		if (std::cin.eof())
			break;
		if (!input.compare("ADD"))
			PhoneBook.add();
		else if (!input.compare("SEARCH"))
			PhoneBook.search();
		else if (!input.compare("EXIT"))
			break;
	}
	return (0);
}
