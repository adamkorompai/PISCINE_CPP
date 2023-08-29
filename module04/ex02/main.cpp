/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 11:10:14 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/01 13:20:16 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;

	//animal->makeSound();
	dog->makeSound();
	cat->makeSound();
	
	return 0;
}

// int main()
// {
// 	Animal* animals[10];

// 	for (int i = 0; i < 10; i++)
// 	{
// 		if (i >= 5)
// 			animals[i] = new Dog();
// 		else
// 			animals[i] = new Cat();
// 	}
// 	Dog copy(*(Dog *)animals[6]);

// 	std::cout << std::endl;

// 	for (int i = 0; i < 100; i++)
// 	{
// 		std::cout << "Copy " << copy.getBrain()->getIdea(i) << std::endl;
// 		std::cout << "Real " <<((Dog *)animals[6])->getBrain()->getIdea(i) << std::endl;
// 	}
	
// 	std::cout << std::endl;
	
// 	for (int i = 0; i < 10; i++)
// 	{
// 		delete animals[i];
// 	}

	
// 	return 0;
// }