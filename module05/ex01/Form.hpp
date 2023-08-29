/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:37:24 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/03 15:54:03 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _signed;
		const unsigned int _grade_sign;
		const unsigned int _grade_exec;
		
		Form& operator=(const Form& other);
		Form(const Form& other);
	public:
		Form();
		Form(std::string name);
		Form(std::string name, const unsigned int grade_s, const unsigned int grade_e);
		
		~Form();
		
		std::string		getName() const;
		bool			isSigned() const;
		unsigned int 	getGradeSign() const;
		unsigned int	getGradeExec() const;
		
		void	beSigned(const Bureaucrat& worker);
		
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw()
					{
						return "Grade too high !";
					}
		};
		
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw()
				{
					return "Grade too low !";
				}
		};
		
};

std::ostream& operator<<(std::ostream& o, const Form& other);

#endif