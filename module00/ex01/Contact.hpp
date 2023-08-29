/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:58:12 by akorompa          #+#    #+#             */
/*   Updated: 2023/05/09 14:00:09 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact{
	
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	
	public:
		Contact();
		~Contact();
		std::string getFname();
		std::string getLname();
		std::string getNname();
		std::string getNumber();
		std::string getSecret();
		void	setFname(std::string str);
		void	setLname(std::string str);
		void	setNname(std::string str);
		void	setNumber(std::string str);
		void	setSecret(std::string str);
};

#endif