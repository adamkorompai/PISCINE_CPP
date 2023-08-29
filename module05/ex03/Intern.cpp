/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:38:18 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/10 13:59:16 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	std::string forms[3] = {"shruberry creation", "robotomy request", "presidential pardon"};
	
	int i = 0;
	while (i < 3 && forms[i] != name)
		i++;
		
	AForm* form = NULL;
	
	switch(i)
	{
		case 0:
			form = new ShruberryCreationForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			break;
		default:
			throw Intern::InvalidFormException();
	}
	
	std::cout << "Intern creates " << name << std::endl;
	
	return form;
}