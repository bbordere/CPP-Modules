#include <iostream>
#include <sstream>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <limits>
#include <string>

enum e_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	NOT_NUMBER,
	SPECIAL_TYPE
};

bool	isSpecialType(std::string str)
{
	std::string sTypes[6] = {"-inff", "-inf", "+inff", "+inf", "nanf", "nan"};
	for (int i = 0; i < 6; i++)
		if (str == sTypes[i])
			return (true);
	return (false);
}

bool	isOnlyValidChar(std::string str)
{
	for (std::size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (!std::isdigit(str[i]) && str[i] != 'f' && str[i] != '.')
			return (false);
	}
	return (true);
}

e_type checkType(std::string const str)
{
	size_t	pos = -1;
	size_t	occ = 0;
	if (str.length() == 1 && !std::isdigit(str[0]))
		return (CHAR);
	if (isSpecialType(str))
		return (SPECIAL_TYPE);
	while ((pos = str.find("." ,pos + 1)) != std::string::npos)
		occ++;
	if (occ > 1 || str.find("ff") != std::string::npos || (!occ && str.find("f") != std::string::npos))
		return (NOT_NUMBER);
	else if (occ == 1)
	{
		if (isOnlyValidChar(str))
			return ((str[str.length() - 1] == 'f') ? FLOAT : DOUBLE);
		return (NOT_NUMBER);
	}
	if (!isOnlyValidChar(str))
		return (NOT_NUMBER);
	if (str.length() > 11 || (str[0] == '-' && atoi(str.c_str()) >= 0)
			|| (str[0] != '-' && atoi(str.c_str()) < 0 ))
		return (DOUBLE);
	else
		return (INT);
}


void	printChar(char c)
{
	std::cout << "char : '" << c << "'" << std::endl;
	std::cout << "int : " << static_cast<int>(c) << std::endl;
	std::cout << "float : " << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double : " << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void	printInt(int n)
{
	if (static_cast<int>(n) > 127 || static_cast<int>(n) < 0)
		std::cout << "char : Impossible" << std::endl;
	else if (static_cast<int>(n) >= 32 && static_cast<int>(n) < 127)
		std::cout << "char : '" << static_cast<char>(n) << "'" << std::endl;
	else
		std::cout << "char : Non displayable" << std::endl;
	std::cout << "int : " << n << std::endl;
	std::cout << "float : " << std::setprecision(1) << static_cast<float>(n) << "f" << std::endl;
	std::cout << "double : " << std::setprecision(1) << static_cast<double>(n) << std::endl;	
}

void	printFloat(float f, bool overflow)
{
	if (overflow)
	{
		std::cout << "char : Impossible" << std::endl;
		std::cout << "int : Impossible" << std::endl;
	}
	else
	{
		if (static_cast<int>(f) > 127 || static_cast<int>(f) < 0)
			std::cout << "char : Impossible" << std::endl;
		else if (static_cast<int>(f) >= 32 && static_cast<int>(f) < 127)
			std::cout << "char : '" << static_cast<char>(f) << "'" << std::endl;
		else
			std::cout << "char : Non displayable" << std::endl;
		std::cout << "int : " << static_cast<int>(f) << std::endl;		
	}
	if (f == static_cast<long>(f))
		std::cout << "float : "<<std::setprecision(1) << f << "f" << std::endl;
	else
		std::cout << "float : " << f << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(f) << std::endl;
}

void	printDouble(double d, bool overflow, size_t precision)
{
	if (overflow)
	{
		std::cout << "char : Impossible" << std::endl;
		std::cout << "int : Impossible" << std::endl;
	}
	else
	{
		if (static_cast<int>(d) > 127 || static_cast<int>(d) < 0)
			std::cout << "char : Impossible" << std::endl;
		else if (static_cast<int>(d) >= 32 && static_cast<int>(d) < 127)
			std::cout << "char : '" << static_cast<char>(d) << "'" << std::endl;
		else
			std::cout << "char : Non displayable" << std::endl;
		std::cout << "int : " << static_cast<int>(d) << std::endl;		
	}
	if (static_cast<float>(d) == static_cast<long>(d))
		std::cout << "float : " << std::setprecision(1) << static_cast<float>(d)<< "f" << std::endl;
	else
		std::cout << "float : " << static_cast<float>(d)<< "f" << std::endl;
	std::cout.precision(precision);
	std::cout << "double : " << d << std::endl;
}

void	printSpecial(float floatRep, double doubleRep)
{
	std::cout << "char : Impossible" << std::endl;
	std::cout << "int : Impossible" << std::endl;
	std::cout << "float : " << floatRep << "f" << std::endl;
	std::cout << "double : " << doubleRep << std::endl;
}

size_t	adjustFormat(std::string input)
{
	if (input.find(".") == std::string::npos)
	{
		std::cout.precision(1);
		return (1);	
	}
	char *ptr;
	double decimals = strtod(input.c_str() + input.find(".") + 1, &ptr);
	size_t	nbDecimals = input.length() - input.find(".") - 1 - (input.find("f") != std::string::npos ? 1 : 0);
	if (nbDecimals > 20)
		nbDecimals = 20;
	if (input[input.length() - 1] == '.' || input.find(".f") != std::string::npos || decimals == 0.0)
		nbDecimals = 1;
	std::cout.precision(nbDecimals);
	return (nbDecimals);
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Wrong number of arguments !" << std::endl;
        return (1);
    }

	std::cout.setf(std::ios::fixed);

	std::string			input = std::string(av[1]);
	e_type				trueType = checkType(input);
	std::stringstream	ss(input);

	std::string	charRep;
	int			intRep;
	float		floatRep;
	double		doubleRep;

	if (trueType == CHAR)
	{
		ss >> charRep;
		printChar(charRep[0]);
	}
	else if (trueType == INT)
	{
		ss >> intRep;
		printInt(intRep);
	}
	else if (trueType == FLOAT || trueType == DOUBLE)
	{
		if (trueType == FLOAT)
		{
			ss >> floatRep;
			adjustFormat(input);
			printFloat(floatRep, (static_cast<long>(floatRep) > (std::numeric_limits<int>::max())) 
							|| (static_cast<long>(floatRep) < (std::numeric_limits<int>::min())));
		}
		else
		{
			ss >> doubleRep;
			printDouble(doubleRep, (static_cast<long>(doubleRep) > (std::numeric_limits<int>::max())) 
								|| (static_cast<long>(doubleRep) < (std::numeric_limits<int>::min())), adjustFormat(input));
		}
	}
	else if (trueType == SPECIAL_TYPE)
	{
		if (input.find("+inf") != std::string::npos)
			printSpecial(std::numeric_limits<float>::infinity(), std::numeric_limits<double>::infinity());
		if (input.find("-inf") != std::string::npos)
			printSpecial(-std::numeric_limits<float>::infinity(), -std::numeric_limits<double>::infinity());
		if (input.find("nan") != std::string::npos)
			printSpecial(std::numeric_limits<float>::quiet_NaN(), std::numeric_limits<double>::quiet_NaN());
	}
	else if (trueType == NOT_NUMBER)
	{
		std::cout << "char : Impossible" << std::endl;
		std::cout << "int : Impossible" << std::endl;
		std::cout << "float : Impossible" << std::endl;
		std::cout << "double : Impossible" << std::endl;
	}
    return (0);
}