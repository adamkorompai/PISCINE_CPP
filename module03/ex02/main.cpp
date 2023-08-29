/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:42:14 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/18 14:40:58 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap adam("adam");
	FragTrap alex("alex");
	
	std::cout << std::endl;
	
	adam.attack("alex");

	std::cout << std::endl;
	
	alex.takeDamage(5);
	alex.beRepaired(10);

	std::cout << std::endl;

	FragTrap theo("theo");
	
	theo.takeDamage(11);
	theo.beRepaired(10);
	theo.takeDamage(1);
	std::cout << std::endl;
	theo.highFivesGuys();


	std::cout << std::endl;
}