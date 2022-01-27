/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/26 18:07:05 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/01/27 20:09:13 by rkieboom      ########   odam.nl         */
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
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: " << this->name <<  " Died!" << std::endl;
}
