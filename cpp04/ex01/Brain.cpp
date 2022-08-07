/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:56:35 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/05 15:56:55 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain Constructor" << std::endl;
}

void	Brain::set_idea(int i, std::string val)
{
	this->ideas[i] = val;
}

std::string Brain::get_idea(int i) const
{
	return (this->ideas[i]);
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Copy Brain Constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->set_idea(i, copy.get_idea(i));	
}

Brain &Brain::operator=(Brain const &assign)
{
	for (int i = 0; i < 100; i++)
		this->set_idea(i, assign.get_idea(i));
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destroyed" << std::endl;
}
