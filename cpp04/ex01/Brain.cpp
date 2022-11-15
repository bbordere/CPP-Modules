/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:56:35 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/15 12:11:44 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain Constructor" << std::endl;
}

void	Brain::setIdea(int i, std::string val)
{
	if (i < 100)
		this->ideas[i] = val;
}

std::string Brain::getIdea(int i) const
{
	if (i < 100)
		return (this->ideas[i]);
	return ("");
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Copy Brain Constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->setIdea(i, copy.getIdea(i));	
}

Brain &Brain::operator=(Brain const &assign)
{
	std::cout << "Brain Assignment Operator" << std::endl;
	for (int i = 0; i < 100; i++)
		this->setIdea(i, assign.getIdea(i));
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destroyed" << std::endl;
}

std::ostream &operator<<(std::ostream &stream, Brain *brain)
{
	std::string	idea;
	stream << "{";
	for (int i = 0; i < 99; i++)
	{
		idea = brain->getIdea(i);
		stream << (idea.empty() ? "" : idea.append(", "));
	}
	stream << brain->getIdea(99) << '}';
	return (stream);
}