/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:37:24 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/08 14:48:48 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _signed;

		const std::string _target;
		
		const unsigned int _grade_sign;
		const unsigned int _grade_exec;
		
		AForm& operator=(const AForm& other);
	public:
		AForm();
		AForm(std::string name);
		AForm(std::string name, std::string target);
		AForm(std::string name, std::string target, const unsigned int grade_s, const unsigned int grade_e);
		AForm(std::string name, const unsigned int grade_s, const unsigned int grade_e);
		AForm(const AForm& other);
		
		~AForm();
		
		std::string		getName() const;
		bool			isSigned() const;
		unsigned int 	getGradeSign() const;
		unsigned int	getGradeExec() const;
		std::string		getTarget() const;
		
		void	beSigned(const Bureaucrat& worker);
		
		void	execute(const Bureaucrat& executor) const;
		
		virtual void action(const Bureaucrat& executor) const = 0;
		
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

		class FormNotSignedException : public std::exception {
			public:
				const char* what() const throw ()
				{
					return ("form not signed yet");
				}
		};
		
};

std::ostream& operator<<(std::ostream& o, const AForm& other);

#endif