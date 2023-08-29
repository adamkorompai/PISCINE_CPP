/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorompa <akorompa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:38:07 by akorompa          #+#    #+#             */
/*   Updated: 2023/07/18 14:53:52 by akorompa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called.\n";
	this->_hit_pts = 100;
	this->_energy_pts = 100;
	this->_attack_pts = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "\033[31m" << "FragTrap constructor with name (" << name << ") called.\n" << "\033[0m";
	this->_hit_pts = 100;
	this->_energy_pts = 100;
	this->_attack_pts = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called on " << other._name << ".\n";
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	this->_name = rhs._name;
	this->_attack_pts = rhs._attack_pts;
	this->_energy_pts = rhs._energy_pts;
	this->_hit_pts = rhs._hit_pts;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[31m" << "FragTrap destructor called for " << this->_name << ".\n" << "\033[0m";
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_hit_pts == 0)
		std::cout << this->_name << "is dead !\n";
	if (this->_energy_pts == 0)
		std::cout << this->_name << " has no energy !\n";
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_pts << " points of damage!\n";
	this->_energy_pts--;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "\033[33m" << this->_name << " would like to high five someone !\n" << "\033[0m";
}