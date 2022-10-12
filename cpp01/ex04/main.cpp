/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:08:29 by bbordere          #+#    #+#             */
/*   Updated: 2022/10/12 18:12:07 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments !" << std::endl;
		return (1);
	}
	std::string		infileName(av[1]);
	std::string		search(av[2]);
	std::string		replace(av[3]);
	std::string		line;
	std::ifstream	inFile;
	std::ofstream	outFile;


	if (search.empty())
	{
		std::cout << "Search str can't be empty" << std::endl;
		return (1);
	}
	inFile.open(infileName.c_str(), std::ifstream::in);
	if (!inFile.is_open())
	{
		std::cout << "Error while opening file !" << std::endl;
		return (1);
	}
	outFile.open((infileName.append(".replace")).c_str(), std::ofstream::out);
	if (!outFile.is_open())
	{
		inFile.close();
		std::cout << "Error while opening file !" << std::endl;
		return (1);
	}
	while (std::getline(inFile, line))
	{
		size_t pos = -1;
		while ((pos = line.find(search, pos + 1)) != std::string::npos)
		{
			line.erase(pos, search.length());
			line.insert(pos, replace);
		}
		outFile << line << std::endl;
	}
	inFile.close();
	outFile.close();
	return (0);
}

