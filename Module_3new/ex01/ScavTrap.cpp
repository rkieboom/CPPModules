/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/23 17:38:58 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/04/23 18:31:53 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string s) : ClapTrap(s)
{
	this->name = s;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << this->name << " came alive!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " died!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints <= 0)
		std::cout << "ScavTrap " << this->name << " has no energy points!" << std::endl;
	else if (this->hitPoints <= 0)
		std::cout << "ScavTrap " << this->name << " is dead!" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints <= 0)
		std::cout << "ScavTrap " << this->name << " has no energy points!" << std::endl;
	else if (this->hitPoints <= 0)
		std::cout << "ScavTrap " << this->name << " is dead!" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->name << " repaired himself " << amount << " points!" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << this->name << " took " << amount << " points damage!" << std::endl;
	this->hitPoints -= amount;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in guardGate!" << std::endl;
}