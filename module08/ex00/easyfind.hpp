/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:24:51 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/21 14:49:05 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class NoElementFoundException : public std::exception
{
	public:
		const char* what() const throw()
		{
			return ("No element found");
		}
};

template <typename T>
typename T::iterator	easyfind(T container, int occurence)
{
	typename T::iterator it = std::find(container.begin(), container.end(), occurence);
	if (it != container.end())
		return it;
	else
		throw NoElementFoundException();
}

#endif