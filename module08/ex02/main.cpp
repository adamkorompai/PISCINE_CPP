/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:32:03 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/22 14:45:01 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	std::cout << "Iterator -----\n\n";

	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::cout << "\n";
	std::cout << "Reverse iterator -------\n\n";
	
	MutantStack<std::string> sstack;

	sstack.push("bonjour");
	sstack.push("bonjour1");
	sstack.push("bonjour2");
	sstack.push("bonjour3");

	std::cout << sstack.size() << std::endl;
	std::cout << sstack.top() << std::endl << std::endl;

	MutantStack<std::string>::reverse_iterator rev_it = sstack.rbegin();
	MutantStack<std::string>::reverse_iterator rev_ite = sstack.rend();
	
	
	for(; rev_it != rev_ite; rev_it++)
		std::cout << *rev_it << std::endl;
	
	
	std::cout << "\n";
	std::cout << "Copy check \n";
	
	MutantStack<int> mcopy(mstack);

	std::cout << mcopy.top() << std::endl;
	std::cout << mstack.top() << std::endl;

	
	MutantStack<std::string> scopy = sstack;
	
	std::cout << scopy.top() << std::endl;
	std::cout << sstack.top() << std::endl;

	return 0;
}