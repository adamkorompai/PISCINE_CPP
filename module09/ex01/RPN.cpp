/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:50:19 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/28 11:10:02 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(std::string input) : _expression(input)
{
	fillStack();
	if (!numbers.empty())
		std::cout << numbers.top() << std::endl;
}

RPN::~RPN()
{

}

RPN::RPN(const RPN& other)
{
	*this = other;
}

RPN& RPN::operator=(const RPN& other)
{
	this->_expression = other.getExpression();
	return *this;
}

std::string 	RPN::getExpression() const
{
	return this->_expression;
}

bool	RPN::checkOperator(char op)
{
	if (op != '+' && op != '-' && op != '/' && op != '*')
	{
		std::cout << "Error: invalid operator : " << op << std::endl;
		exit(-1);
	}
	return true;
}

void	RPN::fillStack()
{
	int exp_size = _expression.size();

	if (exp_size < 3)
		return ;
	for (size_t i = 0; i < exp_size; i++)
	{
		if (_expression[i] != ' ')
		{
			if (std::isdigit(_expression[i]))
				numbers.push(_expression[i] - 48);
			else if (checkOperator(_expression[i]))
				stack.push(_expression[i]);
			if (stack.size() == 1 && numbers.size() >= 2)
				singleOp();
		}
	}
}

void	RPN::singleOp()
{
	char	op;
	int	a, b, result;

	b = numbers.top();
	numbers.pop();
	a = numbers.top();
	numbers.pop();
	op = stack.top();
	stack.pop();
	
	switch(op)
	{
		case 42:
			result = a * b;
			break;
		case 43:
			result = a + b;
			break;
		case 45:
			result = a - b;
			break;
		case 47:
			result = a / b;
			break;
		default:
			std::cout << "Error\n";
	}
	numbers.push(result);
}