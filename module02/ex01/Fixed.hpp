/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:15:36 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/17 15:30:08 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	_fixedpoint;
		static int const fractional = 8;
	public:
		Fixed(void);
		Fixed(const Fixed& other);
		Fixed(int const n);
		Fixed(float const k);
		~Fixed();
		
		Fixed&	operator=(const Fixed& rhs);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif