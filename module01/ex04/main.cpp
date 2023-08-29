/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:37:11 by akorompa          #+#    #+#             */
/*   Updated: 2023/06/06 09:28:26 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


void	error_msg(std::string str)
{
	std::cout << "\033[1;31m";
	std::cout << "Error" << std::endl;
	std::cout << "\033[0m";
	std::cout << str << std::endl;
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream infile;
		std::string	filename(av[1]);
		std::string s1(av[2]);
		std::string s2(av[3]);

		infile.open(filename);
		if (infile.is_open())
		{
			std::ofstream outfile(filename.append(".replace"));
			if (outfile.is_open())	
			{
				while (outfile.good() && infile.good())
				{
					std::string line;
					std::size_t position;
					std::getline(infile, line);
					position = line.find(s1, 0);
					while (position != std::string::npos)
					{
						line.erase(position, s1.length());
						line.insert(position, s2);
						position = line.find(s1, position);
					}
					outfile << line;
					if (infile.eof())
						break ;
					outfile << std::endl;
				}
			}
			outfile.close();
			infile.close();
		}
		else
			error_msg("Failed to open file");
	}
	else
		error_msg("Usage : ./SedIsForLosers <filename> <s1> <s2>");

}