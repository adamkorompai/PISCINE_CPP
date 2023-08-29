/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:14:36 by akorompa          #+#    #+#             */
/*   Updated: 2023/06/06 09:47:15 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon& _weapon;
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	
	void	attack(void);
};
