/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/26 18:07:05 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/01/26 18:17:36 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::attack(const std::string& target)
{
	
}

ClapTrap::takeDamage(unsigned int amount)
{
	
}

ClapTrap::beRepaired(unsigned int amount)
{
	
}

ClapTrap::ClapTrap(std::string s)
{
	this->name = s;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Died!\n";
}