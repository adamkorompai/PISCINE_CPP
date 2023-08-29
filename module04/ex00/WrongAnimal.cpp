/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:25:16 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/20 13:39:40 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "\033[31m" << "WrongAnimal default constructor called.\n" << "\033[0m";
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "\033[31m" << "WrongAnimal for " << type << " constructor called.\n" << "\033[0m";
	this->_type = type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\033[31m" << "Destructor for " << this->_type << " called.\n" << "\033[0m"; 
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "\033[31m" << "WrongAnimal copy constructor called.\n" << "\033[0m";
	this->_type = other._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	this->_type = other._type;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "\033[31m" << "brrrrr\n" << "\033[0m";
}