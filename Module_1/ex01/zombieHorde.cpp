/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/05 14:29:37 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/05/05 14:37:55 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::giveName(std::string newName)
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