/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:43:16 by akorompa          #+#    #+#             */
/*   Updated: 2023/06/06 09:15:32 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;
	
	std::cout << "The memory address of the string : " << &string << std::endl;
	std::cout << "The memory address held by the stringPTR : " << stringPTR << std::endl;
	std::cout << "The memory address held by the stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string : " << string << std::endl;
	std::cout << "The value pointed by stringPTR : " << *stringPTR << std::endl;
	std::cout << "The value pointed by stringREF : " << stringREF << std::endl;
}