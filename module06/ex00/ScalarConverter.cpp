/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:38:20 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/14 14:06:34 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ScalarConverter::convert(std::string literal)
{
	if (literal.empty())
		throw InvalidInputException();
	else if (impossibleCase(literal))
		print_impo(literal);
	else if (is_int(literal))
		print_int(literal);
	else if (is_char(literal))
		print_char(literal);
	else if (is_float(literal))
		print_float(literal);
	else if (is_double(literal))
		print_double(literal);
	else
		throw InvalidInputException();
}

bool	ScalarConverter::impossibleCase(std::string string)
{
	std::string cases[6] = {"-inf", "+inf", "nan", "-inff", "+inff", "nanf"};
	
	for(size_t i = 0; i < 6; i++)
	{
		if (string == cases[i])
			return true;
	}
	return false;
}

bool	ScalarConverter::is_int(std::string string)
{
	int i = 0;
	
	if (string[i] == '-')
		i++;
	while(i < string.size())
	{
		if (!std::isdigit(string[i]))
			return false;
		i++;
	}
	
	int value = std::stoi(string);

	return true;
}

bool ScalarConverter::is_char(std::string string)
{
	if (string.length() != 1)
		return false;
	return true;
}

bool	ScalarConverter::is_float(std::string string)
{
	bool	fSign = false;
	bool	dot = false;
	bool	digits = false;
	bool 	decimals = false;
	
	for(size_t i = 0; i < string.size(); i++)
	{
		if (std::isdigit(string[i]))
			digits = true;
		else if (string[i] == '.' && !decimals)
		{
			dot = true;
			if (std::isdigit(string[i + 1]))
				decimals = true;
		}
		else if (string[i] == 'f')
			fSign = true;
		else
			return false;
	}
	if (fSign && dot && digits && decimals)
		return true;
	return false;
}

bool ScalarConverter::is_double(std::string string)
{
	bool	dot = false;
	bool	digits = false;
	bool 	decimals = false;
	
	for(size_t i = 0; i < string.size(); i++)
	{
		if (std::isdigit(string[i]))
			digits = true;
		else if (string[i] == '.' && !decimals)
		{
			dot = true;
			if (std::isdigit(string[i + 1]))
				decimals = true;
		}
		else
			return false;
	}
	if (dot && digits && decimals)
		return true;
	return false;
}

void	ScalarConverter::print_int(std::string literal)
{
	int value = std::stoi(literal);
	
	char ch = static_cast<char>(value);
	
	if (value >= 33 && value <= 126)
		std::cout << "char : " << ch << std::endl;
	else
		std::cout << "char : non displayable\n";
		
	std::cout << "int : " << value << std::endl;
	
	float fl = static_cast<float>(value);

	std::cout << "float : " << fl << ".0f" << std::endl;

	double db = static_cast<double>(value);

	std::cout << "double : " << db << ".0" << std::endl;
}

void	ScalarConverter::print_char(std::string literal)
{
	if (literal[0] >= 33 && literal[0] <= 126)
		std::cout << "char : " << literal[0] << std::endl;
	else
		std::cout << "char : non displayable\n";
	
	int value = static_cast<int>(literal[0]);
	
	std::cout << "int : " << value << std::endl;
	
	float fl = static_cast<float>(value);

	std::cout << "float : " << fl << ".0f" << std::endl;

	double db = static_cast<double>(value);

	std::cout << "double : " << db << ".0" << std::endl;
}

void	ScalarConverter::print_float(std::string literal)
{
	float fl = std::stof(literal);
	
	bool decimal = false;

	size_t i = 0;

	while (literal[i] != '.')
		i++;
	i++;
	while(literal[i])
	{
		if (literal[i] != '0' && literal[i] != 'f')
			decimal = true;
		i++;
	}
	
	int value = static_cast<int>(fl);
	
	char ch = static_cast<char>(fl);

	if (value >= 33 && value <= 126)
		std::cout << "char : " << ch << std::endl;
	else
		std::cout << "char : non displayable\n";
	
	std::cout << "int : " << value << std::endl;
	
	if (decimal == true)
		std::cout << "float  : " << fl << "f" << std::endl;
	else
		std::cout << "float : " << fl << ".0f" << std::endl;
	
	if (decimal == true)
		std::cout << "double : " << fl << std::endl;
	else
		std::cout << "double : " << fl << ".0" << std::endl;
}

void	ScalarConverter::print_double(std::string literal)
{
	double db = std::stod(literal);

	bool decimal = false;

	size_t i = 0;

	while (literal[i] != '.')
		i++;
	i++;
	while(literal[i])
	{
		if (literal[i] != '0')
			decimal = true;
		i++;
	}
	
	int value = static_cast<int>(db);

	char ch = static_cast<char>(db);
	
	if (value >= 33 && value <= 126)
		std::cout << "char : " << ch << std::endl;
	else
		std::cout << "char : non displayable\n";
	
	std::cout << "int : " << value << std::endl;
	
	if (decimal == true)
		std::cout << "float  : " << db << "f" << std::endl;
	else
		std::cout << "float : " << db << ".0f" << std::endl;
	
	if (decimal == true)
		std::cout << "double : " << db << std::endl;
	else
		std::cout << "double : " << db << ".0" << std::endl;
	
}

void	ScalarConverter::print_impo(std::string literal)
{
	std::cout << "char : impossible\n";
	std::cout << "int : impossible\n";

	if (literal == "-inf" || literal == "-inff")
		std::cout << "float : -inff\n";
	else if (literal == "+inf" || literal == "+inff")
		std::cout << "float : +inff\n";
	else if (literal == "nan" || literal == "nanf")
		std::cout << "float : nanf\n";

	if (literal == "-inf" || literal == "-inff")
		std::cout << "double : -inf\n";
	else if (literal == "+inf" || literal == "+inff")
		std::cout << "double : +inf\n";
	else if (literal == "nan" || literal == "nanf")
		std::cout << "double : nan\n";
}