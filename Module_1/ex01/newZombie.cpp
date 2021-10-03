/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 17:30:14 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/10/03 13:36:31 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>
#include <vector>

Zombie* newZombie(std::string name)
{
	Zombie* zombie = new Zombie(name);
	return (zombie);
}

void	Zombie::giveName(std::string newName)
{
	name = newName;
}

Zombie* zombieHorde(int N, std::string name)
{

	Zombie *zombie = new Zombie[N];

	std::string names[20] = {name, "Noah", "Oliver", "Elijah", "William", "James", "Benjamin",
	"Lucas", "Henry", "Alexander", "Olivia", "Emma", "Ava", "Charlotte", "Sophia", "Amelia", "Isabella",
	"Mia", "Evelyn", "Harper"};
	for (int i = 0; i < 20; i++)
		zombie[i].giveName(names[i]);

	return (zombie);
}
