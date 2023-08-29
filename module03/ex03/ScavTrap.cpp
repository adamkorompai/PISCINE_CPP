/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:29:48 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/18 14:46:48 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called.\n";
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_attack_pts = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "\033[31m" << "ScavTrap constructor with name (" << name << ") called.\n" << "\033[0m";
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_attack_pts = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called on " << other._name <<  ".\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	this->_name = rhs._name;
	this->_attack_pts = rhs._attack_pts;
	this->_energy_pts = rhs._energy_pts;
	this->_hit_pts = rhs._hit_pts;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[31m" << "ScavTrap destructor called for " << "\033[0m" << this->_name << ".\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hit_pts == 0)
		std::cout << this->_name << "is dead !\n";
	if (this->_energy_pts == 0)
		std::cout << this->_name << " has no energy !\n";
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_pts << " points of damage!\n";
	this->_energy_pts--;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "\033[32m" << "ScavTrap " << this->_name << " entered Gate keeper mode.\n" << "\033[0m";
}

