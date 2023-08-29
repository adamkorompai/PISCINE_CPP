/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:02:59 by akorompa          #+#    #+#             */
/*   Updated: 2023/06/06 09:39:21 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string _type;

public:
	Weapon(std::string type);
	~Weapon();
	
	void	setType(std::string type);
	
	std::string const & getType(void) const;

};

