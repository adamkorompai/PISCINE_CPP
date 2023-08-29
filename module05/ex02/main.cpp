/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:30:10 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/29 14:48:59 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShruberryCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main()
{
	Bureaucrat	Adam("adam", 10);
	Bureaucrat 	max("max", 5);
	Bureaucrat	alex("alex", 6);
	
	ShruberryCreationForm test("test");
	PresidentialPardonForm pres("pres");
	RobotomyRequestForm 	rob("rob");

	Adam.executeForm(test);
	Adam.signForm(test);
	Adam.executeForm(test);

	std::cout << std::endl;

	max.executeForm(pres);
	max.signForm(pres);
	max.executeForm(pres);
	
	std::cout << std::endl;

	alex.executeForm(rob);
	alex.signForm(rob);
	alex.executeForm(rob);

	return 0;
}