/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:20:55 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/15 13:08:08 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

void	print_array(std::string& str)
{
	std::cout << str;
	std::cout << std::endl;
}

void	to_upper(std::string& str)
{
	for(int i = 0; str[i]; i++)
		std::cout << (char)std::toupper(str[i]);
	std::cout << std::endl;
}

void	plus_one(int& str)
{
	str++;
	std::cout << str << std::endl;
}

int main()
{
	std::string		string_array[4] = {"Bonjour", "Aurevoir", "Salut", "Coucou"};
	int				int_array[4] = {1, 2, 3, 4};
	
	::iter(string_array, 4, print_array);
	std::cout << std::endl;
	::iter(int_array, 4, plus_one);
	std::cout << std::endl;
	::iter(string_array, 4, to_upper);
}