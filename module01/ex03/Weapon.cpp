/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:03:20 by akorompa          #+#    #+#             */
/*   Updated: 2023/06/06 09:39:15 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) 
{
	
}

Weapon::~Weapon()
{
}

std::string const & Weapon::getType(void) const
{
	return this->_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
