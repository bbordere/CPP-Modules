/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:53:51 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/01 16:03:33 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__

#include <iostream>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contacts[8];
		int		_nb_contact;
		int		_oldest_contact;

	public:
		PhoneBook();
		~PhoneBook();
		void	add();
		void	search();
		void 	print_all_infos(std::string str);
};

#endif