/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:21:15 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/14 16:24:30 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T* array, size_t size, void (*f)(T&))
{
	for (size_t i = 0; i < size; i++)
	{
		(*f)(array[i]);
	}
}
#endif