/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 17:30:18 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/11/06 17:05:31 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string s)
{
	name = s;
}

Zombie::~Zombie(void)
{
	std::cout << '<' << name << '>' << " Died!\n";
}

void	Zombie::announce(void)
{
	std::cout << '<' << name << '>' << " BraiiiiiiinnnzzzZ...\n";
}