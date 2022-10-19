/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/23 18:16:23 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/19 15:22:46 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& s) : ClapTrap(s, 100, 100, 30)
{
	std::cout << "FragTrap " << this->name << " came alive!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other.name, other.hitPoints, other.energyPoints, other.attackDamage)
{
	std::cout << "FragTrap copy con " << this->name << " came alive!" << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap& other)
{
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "FragTrap copy assign " << this->name << " came alive!" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " died!" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " wants a high five!" << std::endl;
}
