/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:07:05 by akorompa          #+#    #+#             */
/*   Updated: 2023/06/06 09:07:05 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie
{
public:
	Zombie(std::string name);
	~Zombie(void);
	
	void	announce( void );		
private:

	std::string _name;
	
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);
