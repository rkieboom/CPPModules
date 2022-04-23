/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/26 18:07:05 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/01/30 17:40:25 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap: " << this->name << " wants a high five? :)" << std::endl;
}

FragTrap::FragTrap(std::string s) : ClapTrap(s)
{
	std::cout << "FragTrap: Has been created!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: " << this->name <<  " Died!" << std::endl;
}
