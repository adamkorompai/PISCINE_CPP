/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:33:28 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/18 14:51:03 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("claptrap"), _hit_pts(10), _energy_pts(10), _attack_pts(0)
{
	std::cout << "ClapTrap default constructor called.\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[34m" << "ClapTrap destructor for " << this->_name << " called.\n" << "\033[0m";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_pts(10), _energy_pts(10), _attack_pts(0)
{
	std::cout << "\033[34m" << "ClapTrap constructor with name("<< name << ") called.\n" << "\033[0m";
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hit_pts(other._hit_pts), _energy_pts(other._energy_pts), _attack_pts(other._attack_pts)
{
	std::cout << "Copy constructor called.\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	this->_name = rhs._name;
	this->_attack_pts = rhs._attack_pts;
	this->_energy_pts = rhs._energy_pts;
	this->_hit_pts = rhs._hit_pts;
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hit_pts == 0)
		std::cout << this->_name << "is dead !\n";
	if (this->_energy_pts == 0)
		std::cout << this->_name << " has no energy !\n";
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_pts << " points of damage!\n";
	this->_energy_pts--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_pts == 0)
	{
		std::cout << this->_name << " is already dead !\n";
	}
	else if (amount > this->_hit_pts)
	{
		std::cout << this->_name << " took " << this->_hit_pts << " damage and now have 0 HP.\n"; 
		this->_hit_pts = 0;
	}
	else
	{
		this->_hit_pts -= amount;
		std::cout << this->_name << " took " << amount << " damage and now have " << this->_hit_pts << ".\n";
	}
	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_pts == 0)
		std::cout << this->_name << " is dead !\n";
	else if (this->_energy_pts == 0)
	{
		std::cout << this->_name << " doesn't have enough energy !\n";
	}
	else
	{
		this->_hit_pts += amount;
		std::cout << this->_name << " restored " << amount << " HP and now have " << this->_hit_pts << ".\n";
		this->_energy_pts--;
	}
}
