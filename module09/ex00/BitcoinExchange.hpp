/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:01:14 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/28 09:40:15 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <vector>
#include <sstream>
#include <stdlib.h>

class BitcoinExchange
{
	private:
		std::map<std::string, float>	_data;
		std::string						_input;
	public:
		BitcoinExchange();
		BitcoinExchange(std::string input);
		BitcoinExchange(const BitcoinExchange& other);
		~BitcoinExchange();
		BitcoinExchange& operator=(const BitcoinExchange& other);
		
		void	readInput();
		void	fillMap(std::string line);

		void	parseFile();
		void	exchange(std::string line);
		
		bool	checkDate(std::string date);
		bool	checkYear(std::string year);
		bool	checkMonth(std::string month);
		bool	checkDay(std::string day);

		bool	checkDelim(std::string line);

		float	checkValue(std::string value);

		void	matchDate(std::string date, float value);
		
		std::string decreaseDate(std::string date); 

		void	setData(std::string date, float value);
		std::map<std::string, float> getData();
};

#endif