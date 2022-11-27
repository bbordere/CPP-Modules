/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbordere <bbordere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:40:27 by bbordere          #+#    #+#             */
/*   Updated: 2022/11/27 15:16:27 by bbordere         ###   ########.fr       */
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
		class	OutOfRange : public std::exception
		{
			virtual char const * what(void) const throw()
			{
				return "Index out of Range !";
			}
		};

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

		T &operator[](unsigned int index)
		{
			if (index > this->_size - 1)
				throw Array::OutOfRange();
			return (this->array[index]);
		};

		T const &operator[](unsigned int index) const
		{
			if (index > this->_size - 1)
				throw Array::OutOfRange();
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

		bool	arrayExist(void) const
		{
			return (this->array ? true : false);
		}
};

template <typename T>
std::ostream &operator<<(std::ostream &stream, Array<T> const &array)
{
	if (!array.arrayExist())
		return (stream);
	stream << "[";
	for (unsigned int i = 0; i < array.size() - 1; i++)
		stream << array[i] << ", ";
	stream << array[array.size() - 1] << ']';
	return (stream);
}

#endif