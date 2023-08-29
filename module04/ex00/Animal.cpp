/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:25:25 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/20 13:29:45 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Default animal")
{
	std::cout << "\033[32m" << "Animal default constructor called.\n" << "\033[0m";
}

Animal::~Animal()
{
	std::cout << "\033[32m" << "Destructor for " << this->_type << " called.\n" << "\033[0m"; 
}

Animal::Animal(std::string type)
{
	std::cout << "\033[32m" << "Animal for " << type << " constructor called.\n" << "\033[0m";
	this->_type = type;
}

Animal::Animal(const Animal& other)
{
	std::cout << "\033[32m" << "Animal copy constructor called.\n" <<"\033[0m";
	this->_type = other._type;
}

Animal& Animal::operator=(const Animal& other)
{
	this->_type = other._type;
	return *this;
}

std::string Animal::getType() const
{
	return this->_type;
}

void	Animal::makeSound() const
{
	std::cout << "\033[32m" << "roaarrrr.\n" << "\033[0m";
}