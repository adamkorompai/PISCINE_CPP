/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:34:59 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/20 13:35:51 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "\033[36m" << "WrongCat default constructor called.\n" << "\033[0m";
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "\033[36m" << "WrongCat constructor for " << type << " called.\n" << "\033[0m";
}

WrongCat::~WrongCat()
{
	std::cout << "\033[36m" << "WrongCat destructor for " << this->_type << " called.\n" << "\033[0m";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "\033[36m" << "WrongCat copy constructor called.\n" << "\033[0m";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	this->_type = other._type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "\033[36m" << "uoiaM\n" << "\033[0m";
}