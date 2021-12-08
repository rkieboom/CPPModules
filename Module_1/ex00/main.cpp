/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 17:30:08 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/12/08 19:35:01 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = newZombie("Olaf");
	randomChump("Renee");
	zombie->announce();
	delete zombie;
	return (0);
}