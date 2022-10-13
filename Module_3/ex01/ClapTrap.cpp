/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/23 17:09:41 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/13 15:23:38 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << this->name << " came alive!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name, const int& hitPoints, const int& energyPoints, const int& attackDamage) : \
name(name), hitPoints(hitPoints), energyPoints(energyPoints), attackDamage(attackDamage)
{
	std::cout << "ClapTrap " << this->name << " came alive!" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
	std::cout << "ClapTrap copy con " << this->name << " came alive!" << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& other)
{
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	

	std::cout << "ClapTrap copy assign " << this->name << " came alive!" << std::endl;
	return *this;
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

void ClapTrap::beRepaired(const unsigned int& amount)
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

void ClapTrap::takeDamage(const unsigned int& amount)
{
	std::cout << "ClapTrap " << this->name << " took " << amount << " points damage!" << std::endl;
	this->hitPoints -= amount;
}
