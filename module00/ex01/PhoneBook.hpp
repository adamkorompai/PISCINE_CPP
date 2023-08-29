/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:39:03 by akorompa          #+#    #+#             */
/*   Updated: 2023/05/10 12:45:24 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class PhoneBook {

private:
	int	index;
	int contacts;
	Contact myContacts[8];
	Contact contactInfo(void);
	void	showBook(int i);
	std::string formated_print(std::string str);
public:
	PhoneBook();
	~PhoneBook();
	void	addContact(void);
	void	showContacts(void);
	void	showContact(int i);
};

#endif