/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:35:27 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/01 14:42:43 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		const std::string	_name;
		unsigned int		_grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat& other);

		Bureaucrat& operator=(const Bureaucrat& other);

		~Bureaucrat();

		std::string		getName() const;
		unsigned int	getGrade() const;

		void	incrementGrade();
		void	decrementGrade();
		

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

std::ostream& operator<<(std::ostream& o, const Bureaucrat& other);

#endif