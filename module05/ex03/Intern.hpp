/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:37:51 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/10 14:01:04 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	private:
	public:
		Intern();
		~Intern();

		AForm* makeForm(std::string name, std::string target);

		class InvalidFormException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "invalid form";
				}
		};
};


#endif