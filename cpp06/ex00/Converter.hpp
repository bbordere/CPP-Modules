/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:47:46 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/07 15:57:22 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONVERTER_HPP__
#define __CONVERTER_HPP__

#include <iostream>
#include <limits>
#include <string>
#include <cstdlib>

class Converter
{
	private:
		enum e_type
		{
			CHAR,
			INT,
			FLOAT,
			DOUBLE,
			NOT_NUMBER
		};
		char	charRep;
		int		intRep;
		float	floatRep;
		double	doubleRep;
		bool	isOverflow;

	public:
		Converter();
		Converter(Converter const &copy);
		Converter &operator=(Converter const &assign);
		~Converter();
		char	getCharRep(void) const;
		int		getIntRep(void) const;
		float	getFloatRep(void) const;
		double	getDoubleRep(void) const;
		bool	getOverflow(void) const;
		size_t		countOccurences(char const c, std::string const str) const;
		Converter::e_type	checkType(std::string const str) const;
		void				doConversion(std::string const str);
		void				printInfos(void) const;

};

#endif