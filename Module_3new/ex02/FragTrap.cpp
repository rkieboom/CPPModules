/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/23 18:16:23 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/04/23 18:22:30 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->name << " came alive!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " died!" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->energyPoints <= 0)
		std::cout << "FragTrap " << this->name << " has no energy points!" << std::endl;
	else if (this->hitPoints <= 0)
		std::cout << "FragTrap " << this->name << " is dead!" << std::endl;
	else
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
}
void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << this->name << " took " << amount << " points damage!" << std::endl;
	this->hitPoints -= amount;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints <= 0)
		std::cout << "FragTrap " << this->name << " has no energy points!" << std::endl;
	else if (this->hitPoints <= 0)
		std::cout << "FragTrap " << this->name << " is dead!" << std::endl;
	else
	{
		std::cout << "FragTrap " << this->name << " repaired himself " << amount << " points!" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " wants a high five!" << std::endl;
}
