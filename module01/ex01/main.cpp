/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:54:24 by akorompa          #+#    #+#             */
/*   Updated: 2023/05/31 14:42:08 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int n = 4;
	std::string name = "Zombie";
	Zombie *horde = zombieHorde(n, name);

	for(int i = 0; i < n; i++)
		horde[i].announce();
	delete [] horde;
}