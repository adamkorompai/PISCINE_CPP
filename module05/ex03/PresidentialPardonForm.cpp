/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:26:12 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/10 11:31:25 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential form", "", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("presidential form", target, 25, 5)
{	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::action(const Bureaucrat& executor) const
{
	this->AForm::execute(executor);

	std::cout << this->getTarget() << " has been pardonned by Zaphod Beeblebrox.\n";
}