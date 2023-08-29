/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:23:21 by akorompa          #+#    #+#             */
/*   Updated: 2023/05/31 15:56:40 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon* _weapon;
public:
	HumanB(std::string name);
	~HumanB();

	void	setWeapon(Weapon& weapon);
	void	attack(void);
};

