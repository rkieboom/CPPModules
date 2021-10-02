/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 17:30:14 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/10/02 17:43:29 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>

Zombie* zombieHorde( int N, std::string name)
{
	std::string tmp;
	std::string names[20] = {"Liam", "Noah", "Oliver", "Elijah", "William", "James", "Benjamin",
	"Lucas", "Henry", "Alexander", "Olivia", "Emma", "Ava", "Charlotte", "Sophia", "Amelia", "Isabella",
	"Mia", "Evelyn", "Harper"};
	
	Zombie* zombie = (Zombie*)malloc(sizeof(Zombie) * N);
	for (int i = 0; i <= 20; i++)
		zombie[i] = Zombie(names[i]);
	for (int i = 0; i <= 20; i++)
		zombie[i].announce();
	return (zombie);
}

Zombie* Zombie::newZombie(std::string name)
{
	Zombie* zombie = new Zombie(name);
	return (zombie);
}
