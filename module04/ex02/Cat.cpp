/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:07:13 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/01 11:31:25 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "\033[33m" << "Cat default constructor called.\n" << "\033[0m";
	this->_brain = new Brain();
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "\033[33m" << "Cat constructor for " << type << " called.\n" << "\033[0m";
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "\033[33m" << "Cat destructor for " << this->_type << " called.\n" << "\033[0m";
	delete this->_brain;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "\033[33m" << "Cat copy constructor called.\n" << "\033[0m";
	
	this->_brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat& other)
{
	this->_type = other._type;
	this->_brain = new Brain(*other._brain);
	
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "\033[33m" << "Miaou\n" << "\033[0m";
}

Brain* Cat::getBrain() const
{
	return this->_brain;
}