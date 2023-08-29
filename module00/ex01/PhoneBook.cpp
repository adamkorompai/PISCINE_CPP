/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:37:55 by akorompa          #+#    #+#             */
/*   Updated: 2023/05/15 12:07:03 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
};

PhoneBook::~PhoneBook(void)
{
};

Contact PhoneBook::contactInfo(void)
{
	Contact contact;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "Enter first name: ";
	std::getline(std::cin, first_name);
	if (std::cin.eof() || first_name.empty())
		exit(1);
	contact.setFname(first_name);
	
	std::cout << "Enter last name: ";
	std::getline(std::cin, last_name);
	if(std::cin.eof() || last_name.empty())
		exit(1);
	contact.setLname(last_name);
	
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	if(std::cin.eof() || nickname.empty())
		exit(1);
	contact.setNname(nickname);
	
	std::cout << "Enter phone number: ";
	std::getline(std::cin, phone_number);
	if (std::cin.eof() || phone_number.empty())
		exit(1);
	contact.setNumber(phone_number);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkest_secret);
	if (std::cin.eof() || darkest_secret.empty())
		exit(1);
	contact.setSecret(darkest_secret);
	
	return contact;
}
void	PhoneBook::addContact()
{
	if (this->contacts <= 7)
		this->contacts++;
	if (this->index <= 7)
	{
		this->myContacts[this->index] = contactInfo();
	}
	else
	{
		this->index = 0;
		this->myContacts[this->index] = contactInfo();
	}
	this->index++;
}

void	PhoneBook::showContacts(){
	int i;
	
	for(i = 0; i < this->contacts; i++){
		showBook(i);
	}
}
void	PhoneBook::showBook(int i){
	
	std::cout << " | " << std::setw(10) << i + 1;
	std::cout << " | " << std::setw(10) << formated_print(this->myContacts[i].getFname());
	std::cout << " | " << std::setw(10) << formated_print(this->myContacts[i].getLname());
	std::cout << " | " << std::setw(10) << formated_print(this->myContacts[i].getNname());
	std::cout << std::endl;
}

std::string PhoneBook::formated_print(std::string str){
	std::string tmp = "";
	
	if (str.length() <= 10)
		return (str);
	tmp = str.substr(0, 9);
	tmp += '.';
	return (tmp);
}

void	PhoneBook::showContact(int i){
	std::cout << "First name : " << this->myContacts[i].getFname() << std::endl;
	std::cout << "Last name : " << this->myContacts[i].getLname() << std::endl;
	std::cout << "Nickname : " << this->myContacts[i].getNname() << std::endl;
	std::cout << "Phone number : " << this->myContacts[i].getNumber() << std::endl;
	std::cout << "Darkest secret : " << this->myContacts[i].getSecret() << std::endl;
}