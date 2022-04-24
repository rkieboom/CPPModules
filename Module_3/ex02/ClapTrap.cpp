/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/23 17:09:41 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/04/23 18:13:58 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap " << this->name << " came alive!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " died!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints <= 0)
		std::cout << "ClapTrap " << this->name << " has no energy points!" << std::endl;
	else if (this->hitPoints <= 0)
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints <= 0)
		std::cout << "ClapTrap " << this->name << " has no energy points!" << std::endl;
	else if (this->hitPoints <= 0)
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " repaired himself " << amount << " points!" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " took " << amount << " points damage!" << std::endl;
	this->hitPoints -= amount;
}
