/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:56:52 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/17 15:30:24 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedpoint(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& other) : _fixedpoint(other._fixedpoint)
{
}


Fixed& Fixed::operator=(const Fixed& rhs)
{
	this->_fixedpoint = rhs._fixedpoint;
	return *this;
}

Fixed::Fixed(int const n)
{
	this->_fixedpoint = (n << fractional);
}

Fixed::Fixed(float const k)
{
	this->_fixedpoint = roundf(k * (1 << fractional));
}

bool Fixed::operator!=(const Fixed& other) const
{
	if (this->_fixedpoint != other._fixedpoint)
		return true;
	else
		return false;
}

bool Fixed::operator==(const Fixed& other) const
{
	if (this->_fixedpoint == other._fixedpoint)
		return true;
	else
		return false;
}

bool Fixed::operator<(const Fixed& other) const
{
	if (this->_fixedpoint < other._fixedpoint)
		return true;
	else
		return false;
}

bool Fixed::operator>(const Fixed& other) const
{
	if (this->_fixedpoint > other._fixedpoint)
		return true;
	else
		return false;
}

bool Fixed::operator>=(const Fixed& other) const
{
	if (this->_fixedpoint >= other._fixedpoint)
		return true;
	else
		return false;
}

bool Fixed::operator<=(const Fixed& other) const
{
	if (this->_fixedpoint <= other._fixedpoint)
		return true;
	else
		return false;
}

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed result;
	
	result.setRawBits(this->_fixedpoint + other._fixedpoint);
	return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed result;
	
	result.setRawBits(this->_fixedpoint - other._fixedpoint);
	return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed result;
	
	result.setRawBits((this->_fixedpoint * other._fixedpoint) >> fractional);
	return result;
}

Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed result;
	
	result.setRawBits((this->_fixedpoint << fractional) / other._fixedpoint);
	return result;
}

Fixed& Fixed::operator++()
{
	this->_fixedpoint++;
	return *this;
}

Fixed& Fixed::operator--()
{
	this->_fixedpoint--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_fixedpoint++;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_fixedpoint--;
	return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a > b)
		return b;
	return a;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a < b)
		return b;
	return a;
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return b;
	return a;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return b;
	return a;
}

int	Fixed::getRawBits(void) const
{
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