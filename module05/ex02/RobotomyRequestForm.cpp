/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:39:56 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/10 11:53:16 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy form", "", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("robotomy form", target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::action(const Bureaucrat& executor) const
{
	this->AForm::execute(executor);
	std::cout << "Brrrrrrrrrrrrr \n";
	std::cout << "Brrrrrrrrrrrrr \n";
	std::cout << "Brrrrrrrrrrrrr \n";

	srand(time(0));
	
	if ((rand() % 2) == 1)
		std::cout << this->getTarget() << " has been robotomized successfully.\n";
	else
		std::cout << "The robotomy on " << this->getTarget() << " failed.\n";
}