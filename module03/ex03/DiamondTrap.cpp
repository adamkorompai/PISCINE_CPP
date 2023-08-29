/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:06:31 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/20 10:19:46 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(), FragTrap(), _name("default")
{
	std::cout << "\033[32m" <<"DiamondTrap default constructor called.\n" << "\033[0m";
	this->_hit_pts = FragTrap::_hit_pts;
	this->_energy_pts = ScavTrap::_energy_pts;
	this->_attack_pts = FragTrap::_attack_pts;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "\033[32m" <<"DiamondTrap constructor with name " << name << " called.\n" << "\033[0m";
	this->_hit_pts = FragTrap::_hit_pts;
	this->_energy_pts = ScavTrap::_energy_pts;
	this->_attack_pts = FragTrap::_attack_pts;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	std::cout << "DiamondTrap copy constructor called on " << other._name << std::endl;
	this->_name = other._name;
	this->_hit_pts = FragTrap::_hit_pts;
	this->_energy_pts = ScavTrap::_energy_pts;
	this->_attack_pts = FragTrap::_attack_pts;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[32m" <<"DiamondTrap destructor called.\n" << "\033[0m";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
	this->_name = rhs._name;
	this->_hit_pts = FragTrap::_hit_pts;
	this->_energy_pts = ScavTrap::_energy_pts;
	this->_attack_pts = FragTrap::_attack_pts;
	return *this;
}

void	DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Hello i am DiamondTrap " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << ".\n";
}