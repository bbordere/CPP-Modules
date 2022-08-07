/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:10:40 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/01 16:04:50 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook successfully init !" << std::endl;
	this->_nb_contact = 0;
	this->_oldest_contact = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook successfully destroyed !" << std::endl;
}

static void update_field(std::string &field)
{
	std::string input;

	std::getline(std::cin, input);
	while(input.empty())
	{
		std::cout << "Please enter a value : ";
		std::getline(std::cin, input);
	}
	field = input;
}

void PhoneBook::add(void)
{
	int	i;

	if (this->_nb_contact < 8)
	{
		this->_nb_contact++;
		i = this->_nb_contact - 1;
	}
	else
	{
		i = this->_oldest_contact;
		this->_oldest_contact == 7 ? this->_oldest_contact = 0 : this->_oldest_contact++;
	}
	this->_contacts[i].get_index() = i;
	std::cout << "First name :" << std::endl;
	update_field(this->_contacts[i].get_first_name());
	std::cout << "Last name :" << std::endl;
	update_field(this->_contacts[i].get_last_name());
	std::cout << "Nickname :" << std::endl;
	update_field(this->_contacts[i].get_nickname());
	std::cout << "Phone Number :" << std::endl;
	update_field(this->_contacts[i].get_phone_number());
	std::cout << "Darkest Secret :" << std::endl;
	update_field(this->_contacts[i].get_darkest_secret());

}

static bool isNumber(const std::string str)
{
	for (std::size_t i = 0; i < str.length(); i++)
		if (!std::isdigit(str[i]))
			return (false);
	return (true);	
}

void PhoneBook::print_all_infos(std::string str)
{
	if (!isNumber(str) || str.empty())
	{
		std::cout << "Not valid index" << std::endl;
		return ;
	}
	int	index = std::atoi(str.c_str());

	if (index < 0 || index >= this->_nb_contact)
		std::cout << "Index out of range" << std::endl;
	else
	{
		std::cout << "First name :" << this->_contacts[index].get_first_name() << std::endl;
		std::cout << "Last name :" << this->_contacts[index].get_last_name() << std::endl;
		std::cout << "Nickname :" << this->_contacts[index].get_nickname() << std::endl;
		std::cout << "Phone Number :" << this->_contacts[index].get_phone_number() << std::endl;
		std::cout << "Darkest Secret :" << this->_contacts[index].get_darkest_secret() << std::endl;
	}
}

void PhoneBook::search(void)
{
	std::string line;

	std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|   Index  |first name|last  name| nickname |" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
	
	for (int i = 0; i < this->_nb_contact; i++)
		this->_contacts[i].print_infos();
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "Index of contact :" << std::endl;
	getline(std::cin, line);
	this->print_all_infos(line);
}