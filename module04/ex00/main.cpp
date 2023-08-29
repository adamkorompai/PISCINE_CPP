/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:10:14 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/28 14:18:45 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Cat();
	const Animal* i = new Dog();

	std::cout << std::endl;

	std::cout << "Animal type --> " << i->getType() << std::endl;
	std::cout << "Animal type --> " << j->getType() << std::endl;
	
	std::cout << std::endl;
	
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	std::cout << std::endl;
	
	const	WrongAnimal* k = new WrongAnimal();
	const	WrongAnimal* l = new WrongCat();

	std::cout << std::endl;

	std::cout << "Animal type --> " << k->getType() << std::endl;
	std::cout << "Animal type --> " << l->getType() << std::endl;

	std::cout << std::endl;

	k->makeSound();
	l->makeSound();

	std::cout << std::endl;
		
	delete meta;
	delete j;
	delete i;
	delete k;	
	delete l;
	
	return 0;
}