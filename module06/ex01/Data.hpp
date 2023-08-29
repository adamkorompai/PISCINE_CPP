/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:20:37 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/14 14:24:00 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data
{
	private:
	
	public:
		Data();
		Data(const Data& other);
		~Data();
		
		Data& operator=(const Data& other);

		std::string _name;
		std::string _age;
};

#endif