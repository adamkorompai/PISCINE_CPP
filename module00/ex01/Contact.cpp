/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:58:04 by akorompa          #+#    #+#             */
/*   Updated: 2023/05/09 14:00:17 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
};


std::string Contact::getFname(){
	return first_name;
}

std::string Contact::getLname(){
	return last_name;
}

std::string Contact::getNname(){
	return nickname;
}

std::string Contact::getNumber(){
	return phone_number;
}
std::string Contact::getSecret(){
	return darkest_secret;
}

void	Contact::setFname(std::string str){
	first_name = str;
}

void	Contact::setLname(std::string str){
	last_name = str;
}

void	Contact::setNname(std::string str){
	nickname = str;
}

void	Contact::setNumber(std::string str){
	phone_number = str;
}

void	Contact::setSecret(std::string str){
	darkest_secret = str;
}

Contact::~Contact(void){
};