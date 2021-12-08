/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 17:30:14 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/12/08 19:49:11 by rkieboom      ########   odam.nl         */
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

static void	Zombie::giveName(std::string newName)
{
	name = newName;
}

Zombie* zombieHorde(int N, std::string name)
{
	int x = 0;
	Zombie *zombie = new Zombie[N];

	std::string names[20] = {name, "Noah", "Oliver", "Elijah", "William", "James", "Benjamin",
	"Lucas", "Henry", "Alexander", "Olivia", "Emma", "Ava", "Charlotte", "Sophia", "Amelia", "Isabella",
	"Mia", "Evelyn", "Harper"};

	for (int i = 0; i < N; i++)
	{
		zombie[i].giveName(names[x]);
		x++;
		if (x == 20)
			x = 0;
	}


	return (zombie);
}
