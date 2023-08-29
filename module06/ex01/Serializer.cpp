/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:11:16 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/14 14:20:15 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::~Serializer()
{
}

Serializer::Serializer(const Serializer& other)
{
}

Serializer& Serializer::operator=(const Serializer& other)
{
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t tmp = reinterpret_cast<uintptr_t>(ptr);
	return tmp;
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	Data* tmp = reinterpret_cast<Data*>(raw);
	return tmp;
}