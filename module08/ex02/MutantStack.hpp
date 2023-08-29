/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:31:47 by akorompa          #+#    #+#             */
/*   Updated: 2023/08/22 14:27:53 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack() : MutantStack<T, Container>::stack() {};
		MutantStack(const MutantStack<T, Container>& other) : MutantStack<T, Container>::stack(other) {};

		MutantStack<T, Container>& operator=(const MutantStack<T, Container>& rhs)
		{
			this->MutantStack<T, Container>::stack::operator=(rhs);
			return *this;
		}

		virtual ~MutantStack() {};

		typedef typename Container::iterator iterator;	
		typedef typename Container::reverse_iterator reverse_iterator;
		
		iterator begin() { return this->c.begin(); };
		iterator end() { return this->c.end(); };
		reverse_iterator rbegin() { return this->c.rbegin();};
		reverse_iterator rend() { return this->c.rend();};
};

#endif