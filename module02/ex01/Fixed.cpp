/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:16:02 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/17 15:30:00 by akorompa         ###   ########.fr       */
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

Fixed::Fixed(int const n)
{
	std::cout << "Int assignment operator called.\n";
	this->_fixedpoint = (n << fractional);
}

Fixed::Fixed(float const k)
{
	std::cout << "Float assignment operator called.\n";
	this->_fixedpoint = int(roundf(k * (1 << fractional)));
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

float Fixed::toFloat(void) const
{
	return float(this->_fixedpoint) / (1 << fractional);
}

int	Fixed::toInt(void) const
{
	return this->_fixedpoint >> fractional;
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
	return os;
}