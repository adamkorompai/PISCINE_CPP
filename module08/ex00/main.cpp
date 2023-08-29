/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:24:27 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/21 15:05:56 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>



int main()
{
	std::vector<int> vector;

	for(int i = 1; i < 6; i++)
		vector.push_back(i);
	
	std::vector<int>::iterator it_vector;

	try
	{
		it_vector = easyfind(vector, 3);
		std::cout << *it_vector << std::endl;
		it_vector = easyfind(vector, 6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::list<int> list;
	
	for(int i = 0; i < 10; i++)
		list.push_back(i);
	
	std::list<int>::iterator it_list;

	try
	{
		it_list = easyfind(list, 7);
		std::cout << *it_list << std::endl;
		it_list = easyfind(list, 11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}