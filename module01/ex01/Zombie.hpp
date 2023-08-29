/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:56:10 by akorompa          #+#    #+#             */
/*   Updated: 2023/05/31 13:41:49 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie();

	void	setName(std::string name);
	void	announce(void);
};

Zombie* zombieHorde(int n, std::string name);