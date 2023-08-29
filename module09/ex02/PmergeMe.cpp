/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:15:58 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/29 14:25:51 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(char **argv) : numbers(argv)
{
	parsing();
	sort();
}

PmergeMe::~PmergeMe()
{
	
}
PmergeMe::PmergeMe(const PmergeMe& other)
{
	
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	return *this;
}

void	PmergeMe::parsing()
{
	int i, j;

	i = 1;

	while (numbers[i])
	{
		j = 0;
		while (numbers[i][j])
		{
			if (!std::isdigit(numbers[i][j]))
			{
				std::cout << "Error: only digits\n";
				exit (1);
			}
			j++;
		}
		dq.push_back(atoi(numbers[i]));
		vec.push_back(atoi(numbers[i]));
		i++;
	}
	std::cout << "Before :";
	printArray(dq);
}
template <typename T>
void	PmergeMe::printArray(const T container)
{
	typename T::const_iterator it;
	for (it = container.begin(); it != container.end(); it++)
		std::cout << " " << *it;
	std::cout << std::endl;
}

void	PmergeMe::sort()
{
	clock_t start, finish;
	double time_vec, time_dq;

	std::cout << "After :";

	start = clock();
	sortVector();
	finish = clock();
	time_vec = static_cast<double>(finish - start) / CLOCKS_PER_SEC * 1000;
	printArray(vec);

	start = clock();
	sortDq();
	finish = clock();

	std::cout << std::endl;
	
	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << time_vec << " us \n";
	std::cout << "Time to process a range of " << dq.size() << " elements with std::deque : " << time_vec << " us \n";
}

void	PmergeMe::sortVector()
{
	std::vector<int>::iterator it1, it2;

	for(it1 = vec.begin() + 1; it1 != vec.end(); it1++) 
	{
		int temp = *it1;
		it2 = it1;
		while (it2 != vec.begin() && *(std::prev(it2)) > temp)
		{
			*it2 = *(std::prev(it2));
			std::advance(it2, -1);
		}
		*it2 = temp;
	}
}

void PmergeMe::sortDq()
{
	std::deque<int>::iterator it1, it2;

	for(it1 = dq.begin() + 1; it1 != dq.end(); it1++) 
	{
		int temp = *it1;
		it2 = it1;
		while (it2 != dq.begin() && *(std::prev(it2)) > temp)
		{
			*it2 = *(std::prev(it2));
			std::advance(it2, -1);
		}
		*it2 = temp;
	}
}

