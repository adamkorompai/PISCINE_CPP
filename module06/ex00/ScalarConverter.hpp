/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:37:57 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/14 14:07:11 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
	private:
	
	public:
	
	static bool		is_int(std::string string);
	static bool		is_char(std::string string);
	static bool 	is_float(std::string string);
	static bool		is_double(std::string string);
	static bool		impossibleCase(std::string string);

	static void		print_impo(std::string literal);
	static void		print_int(std::string literal);
	static void		print_char(std::string literal);
	static void		print_float(std::string literal);
	static void		print_double(std::string literal);
	
	static void	convert(std::string literal);

	class InvalidInputException : public std::exception
	{
		public:
			const char* what() const throw ()
			{
				return ("Invalid input need to be char int float or double");
			}
	};
};

#endif