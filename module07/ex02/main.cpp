/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:23:35 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/21 14:22:22 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	const int size = 5;
	
	Array<int> array_1(size);

	for(int i = 0; i < 5; i++)
		array_1[i] = i;
	std::cout << "int array : ";
	for(int i = 0; i < 5; i++)
		std::cout << array_1[i] << " ";

	std::cout << std::endl;

	Array<int> array_1copy(array_1);

	std::cout << "int copy array : ";
	for(int i = 0; i < 5; i++)
		std::cout << array_1copy[i] << " ";
	
	std::cout << std::endl;
	
	Array<std::string> array_2(size);
	
	for(int i = 0; i < 5; i++)
		array_2[i] = "string " + std::to_string(i);
	std::cout << "string array : ";
	for(int i = 0; i < 5; i++)
		std::cout << "{"<< array_2[i] << "}";
	
	std::cout << std::endl;

	Array<std::string> array_2copy = array_2;
	
	
	std::cout << "string copy array : ";
	for(int i = 0; i < 5; i++)
		std::cout << "{"<< array_2[i] << "}";
		
	std::cout << std::endl;

	Array<int> invalid;
	
	try
	{
		std::cout << invalid[1];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}