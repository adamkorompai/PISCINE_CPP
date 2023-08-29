/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:06:49 by akorompa          #+#    #+#             */
/*   Updated: 2023/05/15 12:21:16 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook myBook;
	std::string command;
	bool stop = true;
	int	i;
	int contacts = 1;
	
	while (stop)
	{
		std::cout << "Enter the command : ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(1);
		if (command == "ADD")
		{
			myBook.addContact();
			contacts++;
		}
		else if (command == "SEARCH")
		{
			myBook.showContacts();
			std::cout << ">>> ";
			std::cin >> i;
			if (std::cin.eof())
				exit(1);
			if ((i <= 8 && i > 0) && i < contacts)
				myBook.showContact(i);
			else
			{
				std::cout << "No contact found with this index.\n";
			}
			std::cin.clear();
			std::cin.ignore(10000, '\n');
		}
		else if (command == "EXIT")
			stop = false;
		else
			std::cout << "Invalid command.\n";
	}
	return (0);
}