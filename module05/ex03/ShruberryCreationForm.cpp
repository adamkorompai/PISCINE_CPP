/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:36:13 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/08 15:09:50 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShruberryCreationForm.hpp"
#include <fstream>


ShruberryCreationForm::ShruberryCreationForm(const std::string target) : AForm("shruberry form", target, 145, 137)
{
	
}

ShruberryCreationForm::ShruberryCreationForm(const ShruberryCreationForm& other) : AForm (other) 
{

}

ShruberryCreationForm& ShruberryCreationForm::operator=(const ShruberryCreationForm& other)
{
	return *this;
}

ShruberryCreationForm::~ShruberryCreationForm()
{
	
}

void	ShruberryCreationForm::action(const Bureaucrat& executor) const
{
	this->AForm::execute(executor);
	std::ofstream ofs(this->getTarget() + "_shrubbery");
	
	if (!ofs.is_open())
		throw std::ofstream::failure(strerror(errno));
	ofs << "               ,@@@@@@@," << std::endl;
	ofs << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	ofs << "    ,&%&&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	ofs << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	ofs << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	ofs << "   %&&%/ %&%&&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	ofs << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	ofs << "       |o|        | |         | |" << std::endl;
	ofs << "       |.|        | |         | |" << std::endl;
	ofs << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
}