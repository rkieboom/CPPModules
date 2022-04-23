/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/26 18:07:05 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/01/30 17:40:05 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ScavTrap: " << name << " can't attack no hitPoints." << std::endl;
	}
	else if (this->energyPoints <= 0)
	{
		std::cout << "ScavTrap: " << name << " can't attack, no energyPoints!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap: " << name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << name << " is now in Gate keeper mode!" << std::endl;
}

ScavTrap::ScavTrap(std::string s) : ClapTrap(s)
{
	std::cout << "ScavTrap: Has been created!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: " << this->name <<  " Died!" << std::endl;
}