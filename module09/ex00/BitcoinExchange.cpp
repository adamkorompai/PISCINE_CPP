/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:01:21 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/29 14:14:36 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(std::string input) : _input(input)
{
	readInput();
	parseFile();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{	
	*this = other;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	this->_data = other._data;
	return *this;
}

void	BitcoinExchange::setData(std::string date, float value)
{
	this->_data.insert(std::make_pair(date, value));
}

std::map<std::string, float> BitcoinExchange::getData()
{
	return this->_data;
}


void	BitcoinExchange::readInput()
{
	std::ifstream	rate("data.csv");
	std::string 	line;

	if (!rate.is_open())
		return;
	std::getline(rate, line);
	while(!rate.eof())
	{
		std::getline(rate, line);
		fillMap(line);
	}
	rate.close();
}

void	BitcoinExchange::fillMap(std::string line)
{
	std::stringstream   s(line);
	std::string         rate, date;
	
	getline(s, date, ',');
	getline(s, rate);
	_data[date] = atof(rate.c_str());	
}

void	BitcoinExchange::parseFile()
{
	std::ifstream	file(this->_input);
	std::string		line;
	
	if (!file.is_open())
		return ;
	std::getline(file, line);
	if (line.compare("date | value") != 0)
	{
		std::cout << "Error: invalid format\n";
		return;
	}
	while(std::getline(file, line))
		exchange(line);
	file.close();
}

void	BitcoinExchange::exchange(std::string line)
{
	std::stringstream   s(line);
	std::string         date, delim, value;

	s >> date >> delim >> value;
	
	if (!checkDate(date))
		return ;
	if (!checkDelim(delim))
		return ;
	float val = checkValue(value);
	if (val == -1)
		return ;
	
	matchDate(date, val);
}

void	BitcoinExchange::matchDate(std::string date, float value)
{
	if (_data.find(date) != _data.end())
	{
		float result = value * _data[date];
		std::cout << date << " => " << std::fixed << std::setprecision(1) << value << " = " << result << std::endl;
		return ;
	}
	else
	{
		date = decreaseDate(date);
		matchDate(date, value);
	}
}

std::string BitcoinExchange::decreaseDate(std::string date)
{
	std::stringstream   s(date);
	std::string         year, month, day, concatenated;

	getline(s, year, '-');
	getline(s, month, '-');
	getline(s, day);
	int	y = atoi(year.c_str());
	int	m = atoi(month.c_str());
	int	d = atoi(day.c_str());
	if (d > 1)
		d--;
	else if (m > 1)
	{
		d = 31;
		m--;
	}
	else if (y > 2008)
	{
		d = 31;
		m = 12;
		y--;
	}
	std::stringstream conc;
	conc << y << '-' << std::setw(2) << std::setfill('0') << m << '-' << std::setw(2) << std::setfill('0') << d;
	concatenated = conc.str();
	return (concatenated);

}

float	BitcoinExchange::checkValue(std::string value)
{
	float val = atof(value.c_str());
	if (value.find("-") == 0)
	{
		std::cout << "Error: Not a positive number.\n";
		return -1;
	}
	if (val <= 1000 && val >= 0)
		return val;
	else
	{
		std::cout << "Error: too large number.\n";
		return -1;
	}
}

bool	BitcoinExchange::checkDelim(std::string delim)
{
	if (delim != "|")
	{
		std::cout << "Error: wrong delimiter\n";
		return false;
	}
	return true;
}

bool	BitcoinExchange::checkDate(std::string date)
{
	std::stringstream	s(date);
	std::string			year, month, day;

	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return false;
	}
	std::getline(s, year, '-');
	std::getline(s, month, '-');
	std::getline(s, day);
	if (!checkYear(year))
	{
		std::cout << "Error: year out of range => " << date << std::endl;
		return false;
	}
	if (!checkMonth(month))
	{
		std::cout << "Error: month out of range => " << date << std::endl;
		return false;
	}
	if (!checkDay(day))
	{
		std::cout << "Error: day out of range => " << date << std::endl;
		return false;
	}
	return true;
}

bool	BitcoinExchange::checkYear(std::string year)
{
	int value = atoi(year.c_str());

	if (value <= 2022 && value >= 2009)
		return true;
	return false;
}

bool	BitcoinExchange::checkMonth(std::string month)
{
	int value = atoi(month.c_str());

	if (value <= 12 && value >= 01)
		return true;
	return false;
}

bool	BitcoinExchange::checkDay(std::string day)
{
	int value = atoi(day.c_str());

	if (value <= 31 && value >= 1)
		return true;
	return false;
}