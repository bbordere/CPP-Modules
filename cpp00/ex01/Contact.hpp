/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:59:47 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/01 16:05:39 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__
#define __CONTACT_HPP__

#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nick_name;
		std::string _phone_number;
		std::string _darkest_secret;
		int			_index;

	public:
		Contact();
		~Contact();
		void		print_infos(void);
		std::string &get_first_name(void);
		std::string &get_last_name(void);
		std::string &get_nickname(void);
		std::string &get_phone_number(void);
		std::string &get_darkest_secret(void);
		int			&get_index(void);
};

#endif