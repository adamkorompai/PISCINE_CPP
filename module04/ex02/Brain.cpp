/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:19:11 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/01 11:52:58 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called.\n";

	for(int i = 0; i < 100; i++)
		this->_ideas[i] = "idea " + std::to_string(i + 1); 
}

Brain::~Brain()
{
	std::cout << "Brain destructor called.\n";
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called.\n";
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = "idea " + std::to_string(i + 1); 
}

Brain& Brain::operator=(const Brain& other)
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	return *this;
}

std::string Brain::getIdea(int index) const
{
	return this->_ideas[index];
}