/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:54:46 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/06 16:14:19 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMY_HPP__
#define __ROBOTOMY_HPP__

#include "Form.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm: public Form
{
	private:
		std::string target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &assign);
		~RobotomyRequestForm();
		std::string		getTarget(void) const;
		void			doExecution(void) const;
};

#endif