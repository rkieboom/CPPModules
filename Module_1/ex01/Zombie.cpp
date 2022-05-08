/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 17:30:18 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/05/05 14:38:43 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}

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
