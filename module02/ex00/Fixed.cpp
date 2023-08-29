/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:16:02 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/17 15:29:49 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedpoint(0)
{
	std::cout << "Default constructor called.\n";
}
Fixed::~Fixed()
{
	std::cout << "Destructor called.\n";
}

Fixed::Fixed(const Fixed& other) : _fixedpoint(other._fixedpoint)
{
	std::cout << "Copy constructor called.\n";
}


Fixed& Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Copy assignment operator called.\n";
	this->_fixedpoint = rhs._fixedpoint;
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called.\n";
	return this->_fixedpoint;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedpoint = raw;
}