/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:37:15 by akorompa          #+#    #+#             */
/*   Updated: 2023/06/06 08:38:21 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	
	std::cout << "DEBUG LEVEL : ";
	harl.complain("DEBUG");
	std::cout << "INFO LEVEL : ";
	harl.complain("INFO");
	std::cout << "WARNING LEVEL : ";
	harl.complain("WARNING");
	std::cout << "ERROR LEVEL : ";
	harl.complain("ERROR");
}