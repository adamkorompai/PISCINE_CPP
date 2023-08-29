/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:10:44 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/23 15:11:01 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _n(N)
{
}

Span::Span(const Span& other) : _n(other._n), _storage(other._storage)
{	
}

Span& Span::operator=(const Span& other)
{
	this->_n = other._n;
	this->_storage = other._storage;
	return *this;
}

Span::~Span()
{	
}

void	Span::addNumber(int number)
{
	if (this->_storage.size() < this->_n)
		this->_storage.push_back(number);
	else
		throw ContainerFullException();
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	int distance = std::distance(begin, end);
	if (this->_storage.size() +  distance <= this->_n)
	{
		_storage.insert(this->_storage.end(), begin, end);
	}
	else
		throw ContainerFullException();
}

int	Span::largestSpan(void)
{
	if (this->_storage.size() < 1)
		throw ContainerEmptyException();
	if (this->_storage.size()  == 1)
		throw ContainerOneException();
	
	int minVal = std::numeric_limits<int>::max();
    int maxVal = std::numeric_limits<int>::min();
	
	for (std::vector<int>::iterator it = this->_storage.begin(); it != this->_storage.end(); ++it)
	{
		if (*it < minVal)
			minVal = *it;
		if (*it > maxVal)
			maxVal = *it;
	}
	
	int span = maxVal - minVal;
	
	return span;
}

int	Span::shortestSpan(void)
{
	if (this->_storage.size() < 1)
		throw ContainerEmptyException();
	if (this->_storage.size()  == 1)
		throw ContainerOneException();
	
	int minVal = std::numeric_limits<int>::min();
    int maxVal = std::numeric_limits<int>::min();
	int tmp;
	
	for (std::vector<int>::iterator it = this->_storage.begin(); it != this->_storage.end(); ++it)
	{
		if (*it > maxVal)
		{
			tmp = maxVal;
			maxVal = *it;
			minVal = tmp;
		}
		if (*it > minVal && *it < maxVal)
			minVal = *it;
	}
	
	int span = maxVal - minVal;
	
	return span;
}