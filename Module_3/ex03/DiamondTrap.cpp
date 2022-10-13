/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/23 18:26:37 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/13 16:15:53 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_ClapTrap"), ScavTrap(name + "_ScavTrap"), FragTrap(name + "_FragTrap"), name(name)
{
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << this->name << " came alive!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " died!" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::beRepaired(const unsigned int& amount)
{
	if (this->energyPoints <= 0)
		std::cout << "DiamondTrap " << this->name << " has no energy points!" << std::endl;
	else if (this->hitPoints <= 0)
		std::cout << "DiamondTrap " << this->name << " is dead!" << std::endl;
	else
	{
		std::cout << "DiamondTrap " << this->name << " repaired himself " << amount << " points!" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
}

void DiamondTrap::takeDamage(const unsigned int& amount)
{
	std::cout << "DiamondTrap " << this->name << " took " << amount << " points damage!" << std::endl;
	this->hitPoints -= amount;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name = [" << this->name << "]\nClapTrap name = [" << ClapTrap::name << "]" << std::endl;
}
