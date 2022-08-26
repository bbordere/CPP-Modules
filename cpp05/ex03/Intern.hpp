/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:41:30 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/07 11:14:14 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "iostream"

class Intern
{
	private:
		Form *createShruberry(std::string target);
		Form *createRobotomy(std::string target);
		Form *createPardon(std::string target);

	public:
		Intern();
		Intern(Intern const &copy);
		Intern  &operator=(Intern const &assign);
		~Intern();
		Form	*makeForm(std::string name, std::string target);
		class NotExistingExeception: public std::exception
		{
			virtual const char *what(void) const throw();
		};
};

#endif