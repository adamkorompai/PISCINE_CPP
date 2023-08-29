/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:56:15 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/18 10:48:53 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed c = 2, d = 20;

	// compariasons
	std::cout << "d < c: ";
	std::cout << std::boolalpha << (d < c) << std::endl;
	std::cout << "d > c: ";
	std::cout << std::boolalpha << (d > c) << std::endl;
	std::cout << "d == c: ";
	std::cout << std::boolalpha << (d == c) << std::endl;
	std::cout << "d != c: ";
	std::cout << std::boolalpha << (d != c) << std::endl;
	std::cout << "d >= c: ";
	std::cout << std::boolalpha << (d >= c) << std::endl;
	std::cout << "d <= c: ";
	std::cout << std::boolalpha << (d <= c)  << std::endl;
	// arithmetics
	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "d - c = " << d - c << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "d / c = " << d / c << std::endl;
	return 0;
}