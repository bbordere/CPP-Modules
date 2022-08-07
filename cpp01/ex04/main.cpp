/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:08:29 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/04 10:43:00 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <iostream>
#include <string>
#include "Replacer.hpp"
  

int main(int ac, char const **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments !" << std::endl;
		return (1);
	}
	std::string line;
	Replacer replacer(av[1], av[2], av[3]);
	if (!replacer.set_infile(replacer.get_filename()))
		return (1);
	if (!replacer.set_outfile(replacer.get_filename().append(".replace")))
	{
		replacer.get_infile().close();
		return (1);
	}
	if (replacer.get_search().empty())
	{
		std::cout << "Search str can't be empty" << std::endl;
		return (1);
	}
	while (std::getline(replacer.get_infile(), line))
	{
		size_t pos = -1;	
		while ((pos = line.find(replacer.get_search(), pos + 1)) != std::string::npos)
		{
			line.erase(pos, replacer.get_search().length());
			line.insert(pos, replacer.get_replace());
		}
		replacer.get_out_file() << line << std::endl;
	}
	return (0);
}
