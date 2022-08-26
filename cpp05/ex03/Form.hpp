/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 11:38:20 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/06 15:50:27 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
#define __FORM_HPP__

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		std::string const	name;
		int			const	signGrade;
		int			const	execGrade;
		bool				isSigned;

	public:
		Form();
		Form(Form const &copy);
		Form(std::string const name, int const signGrade, int const execGrade);
		Form &operator=(Form const &assign);
		virtual ~Form();
		virtual	void execute(Bureaucrat const &executor) const;
		virtual	void doExecution(void) const = 0;
		
		std::string const	getName(void)	const;
		int					getExecGrade(void)	const;
		int					getSignGrade(void)	const;
		bool				getSignStatus(void)	const;
		void				beSigned(Bureaucrat bureaucrat);

		class GradeTooHighException: public std::exception
		{
			virtual const char *what(void) const throw();
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char *what(void) const throw();
		};
		class NotSignedException: public std::exception
		{
			virtual const char *what(void) const throw();
		};
};
std::ostream &operator<<(std::ostream &ouput, Form const &form);

#endif