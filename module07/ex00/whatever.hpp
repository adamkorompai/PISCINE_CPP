/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:22:37 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/17 12:21:30 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T tmp;
	
	tmp = a;
	a = b;
	b = tmp;
} 
template <typename T>
T max(T a, T b)
{
	if (a > b)
		return a;
	else
		return b;
}

template <typename T>
T min (T a, T b)
{
	if (a < b)
		return a;
	else
		return b;
} 

#endif