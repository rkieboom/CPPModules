/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/23 17:38:58 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/13 21:39:44 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(const std::string& s) : ClapTrap(s, 100, 50, 20)
{
	std::cout << "ScavTrap " << this->name << " came alive!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other.name, other.hitPoints, other.energyPoints, other.attackDamage)
{
	std::cout << "ScavTrap copy con " << this->name << " came alive!" << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& other)
{
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "ScavTrap copy assign " << this->name << " came alive!" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " died!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0)
		std::cout << "ScavTrap " << this->name << " is dead!" << std::endl;
	else if (this->energyPoints <= 0)
		std::cout << "ScavTrap " << this->name << " has no energy points!" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in guardGate!" << std::endl;
}
