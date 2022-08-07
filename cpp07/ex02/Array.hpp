/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:40:27 by bbordere          #+#    #+#             */
/*   Updated: 2022/07/08 12:38:42 by bbordere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
	private:
		T 				*array;
		unsigned int	_size;

	public:
		Array(void)
		{
			this->array = NULL;
			this->_size = 0;
		};
		
		Array(unsigned int size)
		{
			this->array = new T[size]();
			this->_size = size;
		};
		
		Array(Array<T> const &copy)
		{
			this->array = new T[copy.size()];
			this->_size = copy.size();
			for (unsigned int i = 0; i < this->_size; i++)
				this->array[i] = copy.array[i];
		};

		Array<T> &operator=(Array<T> const &assign)
		{
			delete [] this->array;
			this->array = new T[assign.size()];
			this->_size = assign.size();
			for (unsigned int i = 0; i < this->_size; i++)
				this->array[i] = assign.array[i];
			return (*this);			
		};

		T &operator[](size_t index)
		{
			if (index < 0 || index > this->_size - 1)
				throw std::overflow_error("Invalid Index");
			return (this->array[index]);
		};

		unsigned int size(void) const
		{
			return (this->_size);
		};
		
		~Array()
		{
			delete []this->array;
		};
};

#endif