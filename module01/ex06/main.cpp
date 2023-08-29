/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:37:15 by akorompa          #+#    #+#             */
/*   Updated: 2023/06/06 09:05:49 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	
	if (ac == 2)
	{
		std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		int i = 0;
		while (levels[i] != av[1] && i < 4)
			i++;
		switch (i)
		{
			case 0:
				std::cout << "[ " << levels[0] << " ]\n";
				harl.complain(levels[0]);
				std::cout << std::endl;
			case 1:
				std::cout << "[ " << levels[1] << " ]\n";
				harl.complain(levels[1]);
				std::cout << std::endl;
			case 2:
				std::cout << "[ " << levels[2] << " ]\n";
				harl.complain(levels[2]);
				std::cout << std::endl;
			case 3:
				std::cout << "[ " << levels[3] << " ]\n";
				harl.complain(levels[3]);
				std::cout << std::endl;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]\n";
		}
	}
	else
		std::cout << "2 arguments needed for this program !\n";
}