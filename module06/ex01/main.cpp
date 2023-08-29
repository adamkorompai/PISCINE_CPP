/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:26:06 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/14 14:29:35 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data adam;

	std::cout << adam._name << std::endl;
	std::cout << adam._age << std::endl;

	std::cout << " ---------------\n";

	uintptr_t adamserialized = Serializer::serialize(&adam);

	Data* ptr = Serializer::deserialize(adamserialized);

	std::cout << ptr->_name << std::endl;
	std::cout << ptr->_age << std::endl;
}