/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:06:47 by akorompa          #+#    #+#             */
/*   Updated: 2023/06/06 09:06:47 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie1("obama");
	Zombie *zombie2 = newZombie("michelle");
	
	zombie1.announce();
	zombie2->announce();
	
	randomChump("joe");
	
	delete zombie2;
	return (0);
}