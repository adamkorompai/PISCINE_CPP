/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:11:36 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/29 14:25:39 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

class PmergeMe
{
	private:
		std::deque<int> dq;
		std::vector<int> vec;
		char **numbers;

	public:
		PmergeMe();
		PmergeMe(char **argv);
		~PmergeMe();		
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);		

		void	parsing();
		void	sort();
		
		template <typename T>
		void	printArray(const T container);

		void	sortVector();
		void	sortDq();
};

#endif