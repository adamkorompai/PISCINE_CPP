/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:58:49 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/14 15:14:24 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
	std::cout << "Generated from class : ";

	srand(time(NULL));

	switch(rand() % 3)
	{
		case 0:
			std::cout << "A\n";
			return new A();
		case 1:
			std::cout << "B\n";
			return new B();
		case 2:
			std::cout << "C\n";
			return new C();
		defaut:
			return NULL;
	}
	return NULL;
}

void	identify(Base* p)
{
	std::cout << "Identify by pointer : ";
	if (dynamic_cast<A*>(p))
		std::cout << "Type A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "Type B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "Type C\n";
	else
		std::cout << "bad cast\n";
}

void	identify(Base& p)
{
	std::cout << "Identify by reference : ";
	if (dynamic_cast<A*>(&p))
		std::cout << "Type A\n";
	else if (dynamic_cast<B*>(&p))
		std::cout << "Type B\n";
	else if (dynamic_cast<C*>(&p))
		std::cout << "Type C\n";
	else
		std::cout << "bad cast\n";
}

int main()
{
	Base* random = generate();

	identify(random);
	
	Base& ref = *random;
	
	identify(ref);
}