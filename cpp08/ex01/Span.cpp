/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:20:00 by bbordere          #+#    #+#             */
/*   Updated: 2022/12/01 22:12:43 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Span.hpp"

Span::Span()
{
	this->size = 0;
}

Span::Span(unsigned int n)
{
	this->size = n;
}

unsigned int Span::getSize(void) const
{
	return (this->size);
}

Span::Span(Span const &copy)
{
	this->size = copy.getSize();
	this->span = std::vector<int>(copy.span);
}
Span &Span::operator=(Span const &asssign)
{
	this->size = asssign.getSize();
	this->span.clear();
	this->span.insert(this->span.begin(), asssign.span.begin(), asssign.span.end());
	return (*this);
}

Span::~Span()
{
}

const char *Span::DistanceNotFoundException::what(void) const throw()
{
	return ("Distance can't be found. Span must contain almost 2 elements!");
}

const char *Span::OutOfRangeException::what(void) const throw()
{
	return ("Can't add element. Span is full");
}

void	Span::addNumber(int n)
{
	if (this->span.size() != this->size)
		this->span.push_back(n);
	else
		throw (Span::OutOfRangeException());
}

unsigned int Span::longestSpan(void) const
{
	if (this->span.size() < 2)
		throw (Span::DistanceNotFoundException());
	else
	{
		int	maxElement = *(std::max_element(this->span.begin(), this->span.end()));
		int	minElement = *(std::min_element(this->span.begin(), this->span.end()));
		return (static_cast<unsigned int>(maxElement - minElement));
	}
}

unsigned int Span::shortestSpan(void) const
{
	if (this->span.size() < 2)
		throw (Span::DistanceNotFoundException());
	else
	{
		std::vector<int> temp(this->span);
		std::sort(temp.begin(), temp.end());
		int res = temp.at(1) - temp.at(0);
		for (std::vector<int>::iterator it = temp.begin() + 1; it != temp.end(); it++) 
		{
			if(*it - *(it - 1) < res) 
				res = *it - *(it - 1);
		}
		return (static_cast<unsigned int>(res));
	}
}

void		Span::fillSpan(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator i = start; i < end; i++)
		this->addNumber(*i);	
}
