/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:14:13 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/15 14:04:51 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T> 
class Array
{
	private:
		T*				_array;
		unsigned int	_size;
	public:
		Array() : _size(0), _array(new T[0]) {};
		Array(unsigned int n) : _size(n), _array(new T[n]) {};
		Array(const Array& other)
		{
			this->_size = other._size;
			this->_array = new T[other._size];
			for (unsigned int i = 0; i < other._size; i++)
				this->_array[i] = other._array[i];
		}
		
		Array&	operator=(const Array& other)
		{
			this->_size = other._size;
			this->_array = new T[other._size];
			for (unsigned int i = 0; i < other._size; i++)
				this->_array[i] = other._array[i];

			return *this;
		}
		
		~Array()
		{
			delete [] this->_array;
		}
		
		T& operator[](unsigned int idx)
		{
			if (idx >= this->_size)
				throw OutOfRangeException();
			return this->_array[idx];
		}

		unsigned int size()
		{
			return this->_size;
		}

		class OutOfRangeException : public std::exception
		{
		public:
			const char* what() const throw()
			{
				return ("Element is out of range of array");
			}
		};
		
};

#endif