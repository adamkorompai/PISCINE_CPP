/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:47:19 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/28 11:05:28 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <cctype>
#include <cstdlib>

class RPN
{
	private:
		std::string			_expression;
		std::stack<char>	stack;
		std::stack<int>		numbers;
	public:
		RPN();
		RPN(std::string input);
		RPN(const RPN& other);
		~RPN();
		RPN& operator=(const RPN& other);

		std::string getExpression() const;

		void	fillStack();
		void	singleOp();
		bool	checkOperator(char op);
};

#endif