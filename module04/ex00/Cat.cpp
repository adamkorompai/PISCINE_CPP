/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:07:13 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/20 13:12:21 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "\033[33m" << "Cat default constructor called.\n" << "\033[0m";
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "\033[33m" << "Cat constructor for " << type << " called.\n" << "\033[0m";
}

Cat::~Cat()
{
	std::cout << "\033[33m" << "Cat destructor for " << this->_type << " called.\n" << "\033[0m";
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "\033[33m" << "Cat copy constructor called.\n" << "\033[0m";
}

Cat& Cat::operator=(const Cat& other)
{
	this->_type = other._type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "\033[33m" << "Miaou\n" << "\033[0m";
}