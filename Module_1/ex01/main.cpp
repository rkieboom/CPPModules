/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 17:30:08 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/08 18:29:59 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie* zombie;
	zombie = zombieHorde(50, "Olaf");
	
	for (int i = 0; i < 50; i++)
		zombie[i].announce();
	delete [] zombie;
	return (0);
}
