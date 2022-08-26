/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:36:53 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/06 11:27:07 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>

class Bureaucrat
{
	private:
		std::string const	name;
		int					grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &copy);
		Bureaucrat &operator=(Bureaucrat const &assign);
		~Bureaucrat();

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		increaseGrade(void);
		void		decreaseGrade(void);

		class GradeTooHighException: public std::exception
		{
			virtual const char *what(void) const throw();
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char *what(void) const throw();
		};
};

std::ostream &operator<<(std::ostream &output, Bureaucrat const &bureaucrat);

#endif