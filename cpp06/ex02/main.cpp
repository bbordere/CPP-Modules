/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:13:38 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/07 17:34:47 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

Base	*generate(void)
{
	int r = rand() % 3;
	switch (r)
	{
	case 0:
		return (new A());
	case 1:
		return (new B());
	default:
		return (new C());
	}
}

void	identify(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	if(a)
		std::cout << "Real type of pointer is: A" << std::endl;
	B *b = dynamic_cast<B*>(p);
	if(b)
		std::cout << "Real type of pointer is: B" << std::endl;
	C *c = dynamic_cast<C*>(p);
	if(c)
		std::cout << "Real type of pointer is: C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Real type of reference is: A" << std::endl;
	}
	catch (std::exception &e){}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Real type of reference is: B" << std::endl;
	}
	catch (std::exception &e){}	
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Real type of reference is: C" << std::endl;
	}
	catch (std::exception &e){}
}

int main(void)
{
	srand(time(NULL));
	for(size_t i = 0; i < 15; i++)
	{
		Base *p = generate();
		std::cout << "-----" << i << "-----" << std::endl;
		identify(p);
		identify(*p);
		std::cout << std::endl;
		delete(p);
	}
}
