/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 17:30:18 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/09/26 18:50:27 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string s)
{
	name = s;
	std::cout << name << ": Constructor called!\n";
}

Zombie::~Zombie(void)
{
	std::cout << name << ": Deconstructor called!\n";
}

void	Zombie::announce(void)
{
	std::cout << name << ": " << " BraiiiiiiinnnzzzZ...\n";
}
