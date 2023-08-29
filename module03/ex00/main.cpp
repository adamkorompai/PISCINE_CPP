/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:42:14 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/18 13:27:58 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap adam("adam");
	ClapTrap alex("alex");
	
	std::cout << std::endl;
	
	adam.attack("alex");

	std::cout << std::endl;
	
	alex.takeDamage(5);
	alex.beRepaired(10);

	std::cout << std::endl;

	ClapTrap theo("theo");
	
	theo.takeDamage(11);
	theo.beRepaired(10);
	theo.takeDamage(1);

	std::cout << std::endl;

	ClapTrap albert("albert");
	
	for(int i = 0; i < 11; i++)
		albert.beRepaired(1);

	std::cout << std::endl;
}