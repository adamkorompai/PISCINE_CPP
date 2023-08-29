/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:42:14 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/20 10:18:28 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap adam("adam");

	std::cout << std::endl;

	adam.attack("alex");

	std::cout << std::endl;

	adam.takeDamage(50);
	adam.beRepaired(10);

	std::cout << std::endl;

	adam.whoAmI();

	std::cout << std::endl;
}