/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:30:10 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/29 14:47:04 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	Adam("adam", 10);
	Bureaucrat 	Alex("alex", 1);
	
	Form		chomage("chomage", 10, 5);
	Form		allocation("allocation");

	Adam.signForm(chomage);
	
	Adam.signForm(allocation);
	std::cout << allocation;
	
	Alex.signForm(allocation);
	
	std::cout << allocation;
	std::cout << chomage;
	
	return 0;
}