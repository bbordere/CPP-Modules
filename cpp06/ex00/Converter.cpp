/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:24:32 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/07 16:18:48 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter()
{
	this->charRep = 0;
	this->intRep = 0;
	this->floatRep = 0.0;
	this->doubleRep = 0.0;
	this->isOverflow = false;
}

Converter::Converter(Converter const &copy)
{
	this->charRep = copy.getCharRep();
	this->intRep = copy.getIntRep();
	this->floatRep = copy.getFloatRep();
	this->doubleRep = copy.getDoubleRep();
	this->isOverflow = copy.getOverflow();
}

Converter &Converter::operator=(Converter const &assign)
{
	this->charRep = assign.getCharRep();
	this->intRep = assign.getIntRep();
	this->floatRep = assign.getFloatRep();
	this->doubleRep = assign.getDoubleRep();
	this->isOverflow = assign.getOverflow();
	return (*this);
}

char	Converter::getCharRep(void) const
{
	return (this->charRep);
}

int		Converter::getIntRep(void) const
{
	return (this->intRep);
}

float	Converter::getFloatRep(void) const
{
	return (this->floatRep);
}
double	Converter::getDoubleRep(void) const
{
	return (this->doubleRep);
}
bool	Converter::getOverflow(void) const
{
	return (this->isOverflow);
}

size_t		Converter::countOccurences(char const c, std::string const str) const
{
	size_t	nb = 0;
	size_t	pos = -1;
	while ((pos = str.find(c ,pos + 1)) != std::string::npos)
		nb++;
	return (nb);
}

Converter::e_type Converter::checkType(std::string const str) const
{
	size_t				occ = this->countOccurences('.', str);

	if (str.length() == 1 && !std::isdigit(str[0]))
		return (Converter::CHAR);
	else if (occ > 1)
		return (Converter::NOT_NUMBER);
	else if (occ == 1)
		return ((str[str.length() - 1] == 'f') ? Converter::FLOAT : Converter::DOUBLE);
	for (std::size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (!std::isdigit(str[i]))
			return (Converter::NOT_NUMBER);
	}
	// return (str.length() > 11 ? Converter::DOUBLE : Converter::INT);
	if (str.length() > 11 || (str[0] == '-' && std::atoi(str.c_str()) >= 0) || (str[0] != '-' && std::atoi(str.c_str()) < 0 ))
		return (Converter::DOUBLE);
	else
		return (Converter::INT);
}

void	Converter::doConversion(std::string const str)
{
	Converter::e_type type = this->checkType(str);
	switch (type)
	{
		case Converter::CHAR:
		{
			this->charRep = str[0];
			this->intRep = static_cast<char>(this->charRep);
			this->floatRep = static_cast<float>(this->charRep);
			this->doubleRep = static_cast<double>(this->charRep);
			break;
		}
		case Converter::INT:
		{
			this->intRep = std::atoi(str.c_str());
			if (this->intRep >= 0 && this->intRep <= 127)
				this->charRep = static_cast<char>(this->intRep);
			else
				this->charRep = 127;
			this->floatRep = static_cast<float>(this->intRep);
			this->doubleRep = static_cast<double>(this->intRep);
			break;
		}
		case Converter::FLOAT:
		{
			this->floatRep = std::atof(str.c_str());
			this->intRep = static_cast<int>(this->floatRep);
			if (this->floatRep >= 0 && this->floatRep <= 127)
				this->charRep = static_cast<char>(this->floatRep);
			else
				this->charRep = 127;
			this->doubleRep = static_cast<double>(this->floatRep);
			if (this->floatRep > 2147483647.0 || this->floatRep < -2147483648.0)
				this->isOverflow = true;
			break;
		}
		case Converter::DOUBLE:
		{
			this->doubleRep = std::atof(str.c_str());
			this->intRep = static_cast<int>(this->doubleRep);
			if (this->doubleRep >= 0 && this->doubleRep <= 127)
				this->charRep = static_cast<char>(this->doubleRep);
			else
				this->charRep = 127;
			this->floatRep = static_cast<float>(this->doubleRep);
			if (this->doubleRep > 2147483647.0 || this->doubleRep < -2147483648.0)
				this->isOverflow = true;
			break;
		}
		case Converter::NOT_NUMBER:
		{
			if (!str.compare("+inf") || !str.compare("+inff"))
			{
				this->charRep = 127;
				this->isOverflow = true;
				this->floatRep = std::numeric_limits<float>::infinity();
				this->doubleRep = std::numeric_limits<double>::infinity();
			}
			else if (!str.compare("-inf") || !str.compare("-inff"))
			{
				this->charRep = 127;
				this->isOverflow = true;
				this->floatRep = -std::numeric_limits<float>::infinity();
				this->doubleRep = -std::numeric_limits<double>::infinity();
			}
			else if (!str.compare("nan") || !str.compare("nanf"))
			{
				this->charRep = 127;
				this->isOverflow = true;
				this->floatRep = std::numeric_limits<float>::quiet_NaN();
				this->doubleRep = std::numeric_limits<double>::quiet_NaN();
			}
			break;
		}
	}
}

void Converter::printInfos(void) const
{
	if (std::isprint(this->getCharRep()))
		std::cout << "char : '" << this->getCharRep() << "'" << std::endl;
	else
		std::cout << "char : Non displayable" << std::endl;
	if (!this->getOverflow())
		std::cout << "int : " <<this->getIntRep() << std::endl;
	else
		std::cout << "int : Impossible" << std::endl;
	std::cout << "float : " <<this->getFloatRep() << (this->getIntRep() == this->getFloatRep() ? ".0f" : "f") << std::endl;
	std::cout << "double : " <<this->getDoubleRep() << (this->getIntRep() == this->getDoubleRep() ? ".0" : "") << std::endl;
}

Converter::~Converter()
{
}
