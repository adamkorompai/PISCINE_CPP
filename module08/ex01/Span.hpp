/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:08:41 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/22 14:57:01 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <limits>

class Span
{
	private:
		std::vector<int> _storage;
		unsigned int _n;
	public:
		Span(unsigned int n);
		Span(const Span& other);
		
		Span& operator=(const Span& other);
		
		~Span();

		void	addNumber(int number);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		
		int		shortestSpan(void);
		int		largestSpan(void);

		class ContainerFullException : public std::exception
		{
			const char* what() const throw()
			{
				return ("Container full");
			}
		};
		class ContainerEmptyException : public std::exception
		{
			const char* what() const throw()
			{
				return ("Container empty");
			}
		};
		class ContainerOneException : public std::exception
		{
			const char* what() const throw()
			{
				return ("Container must have at least 2 elements to get a span");
			}
		};
};

#endif