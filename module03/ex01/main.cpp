/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:42:14 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/18 15:34:48 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap adam("adam");
	ScavTrap alex("alex");
	
	std::cout << std::endl;
	
	adam.attack("alex");

	std::cout << std::endl;
	
	alex.takeDamage(5);
	alex.beRepaired(10);

	std::cout << std::endl;

	ScavTrap theo("theo");
	
	theo.takeDamage(11);
	theo.beRepaired(10);
	theo.takeDamage(1);
	std::cout << std::endl;
	theo.guardGate();
	
	std::cout << std::endl;
}