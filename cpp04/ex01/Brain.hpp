/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:39:54 by bbordere          #+#    #+#             */
/*   Updated: 2022/10/19 15:45:35 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
#define	__BRAIN_HPP__

#include  <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain const &copy);
		Brain &operator=(Brain const &assign);
		~Brain();
		std::string getIdea(int i) const;
		void		setIdea(int i, std::string val);
};

#endif