/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:29:54 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/18 13:57:53 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);	
		ScavTrap(std::string name);	
		ScavTrap(const ScavTrap& other);
		
		ScavTrap& operator=(const ScavTrap& rhs);
		
		~ScavTrap();
	
		void	attack(const std::string& target);
		void	guardGate(void);
};

#endif