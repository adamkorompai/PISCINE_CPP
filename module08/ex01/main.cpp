/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:08:29 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/22 14:58:59 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span numbers(5);
	
	try
	{
		numbers.addNumber(3);
		numbers.addNumber(9);
		numbers.addNumber(45);
		numbers.addNumber(78);
		numbers.addNumber(65);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << numbers.largestSpan() << std::endl;
	std::cout << numbers.shortestSpan() << std::endl;

	std::vector<int> numbers_to_add;
	
	for (int i = 0; i < 500; i++)
		numbers_to_add.push_back(i);

	//numbers_to_add.push_back(1);
	
	std::cout << std::endl;

	Span numbers_2(500);

	std::vector<int>::iterator it = numbers_to_add.begin();
	std::vector<int>::iterator ite = numbers_to_add.end();

	try
	{
		numbers_2.addNumber(it, ite);
		std::cout << numbers_2.largestSpan() << std::endl;
		std::cout << numbers_2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}