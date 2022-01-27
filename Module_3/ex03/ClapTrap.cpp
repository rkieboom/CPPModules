/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/26 18:07:05 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/01/27 19:43:12 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap: " << name << " can't attack no hitPoints." << std::endl;
	}
	else if (this->energyPoints <= 0)
	{
		std::cout << "ClapTrap: " << name << " can't attack, no energyPoints!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap: " << name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap: " << name << " took " << amount << " damage!" << std::endl;
	this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap: " << name << " can't attack no hitPoints." << std::endl;
	}
	else if (this->energyPoints <= 0)
	{
		std::cout << "ClapTrap: " << name << " can't repair, no energyPoints!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap: " << name << " repaired himself with " << amount << " points!" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
}

ClapTrap::ClapTrap(std::string s)
{
	std::cout << "ClapTrap: Has been created!" << std::endl;
	this->name = s;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: " << this->name <<  " Died!" << std::endl;
}