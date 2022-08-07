/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:24:55 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/07 15:33:00 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int ac, char **av)
{
	(void)ac;
	Converter conv = Converter();
	conv.doConversion(av[1]);
	conv.printInfos();
	return 0;
}
