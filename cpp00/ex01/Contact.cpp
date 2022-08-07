/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:35:26 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/01 16:21:07 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{

}

Contact::~Contact(void)
{
	
}

std::string &Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string &Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string &Contact::get_nickname(void)
{
	return (this->_nick_name);
}

std::string &Contact::get_phone_number(void)
{
	return (this->_phone_number);
}

std::string &Contact::get_darkest_secret(void)
{
	return (this->_darkest_secret);
}

int			&Contact::get_index(void)
{
	return (this->_index);
}

static std::string cut_str(std::string str)
{
	if (str.length() > 10)
	{
		str.insert(9, ".");
		str = str.substr(0, 10);
	}
	return (str);
}

void Contact::print_infos(void)
{
	std::cout << "|"  << std::setfill(' ') << std::setw(10) << this->_index;
	std::cout << "|" << std::setw(10) << std::setfill(' ') << cut_str(this->_first_name);
	std::cout << "|" << std::setw(10) << std::setfill(' ') << cut_str(this->_last_name);
	std::cout << "|" << std::setw(10) << std::setfill(' ') << cut_str(this->_nick_name) << '|' << std::endl;
}
