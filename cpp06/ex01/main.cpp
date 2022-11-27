/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:57:10 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/27 15:31:59 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast <uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast <Data*>(raw));
}

int main(void)
{
	Data data = {"Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.", 42};
	std::cout << "Before serialization" << std::endl;
	std::cout << data.str << ", " << data.n << std::endl;
	std::cout << std::endl;
	std::cout << "After serialization" << std::endl;
	uintptr_t	serialized = serialize(&data);
	std::cout << serialized << std::endl << std::endl;
	std::cout << "After deserialization" << std::endl;
	Data *rData = deserialize(serialized);
	std::cout << rData->str << ", " << rData->n << std::endl;
	return (0);
}
