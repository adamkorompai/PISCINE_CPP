/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:05:33 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/20 13:16:20 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "\033[34m" << "Dog default constructor called.\n" << "\033[0m";
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "\033[34m" << "Dog constructor for " << type << " called.\n" << "\033[0m";
}

Dog::~Dog()
{
	std::cout << "\033[34m" << "Dog destructor for " << this->_type << " called.\n" << "\033[0m";
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "\033[34m" << "Dog copy constructor called.\n" << "\033[0m";
}

Dog& Dog::operator=(const Dog& other)
{
	this->_type = other._type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "\033[34m" << "Woof woof !\n" << "\033[0m";
}