/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:24:02 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/14 14:30:45 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _name("adam"), _age("22") {
}

Data::Data(const Data& other) : _name(other._name), _age(other._age) {
}

Data& Data::operator=(const Data& other){
	(void)other;
	return *this;
}

Data::~Data()
{
	
}