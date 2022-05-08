/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 17:30:14 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/05/05 14:29:35 by rkieboom      ########   odam.nl         */
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


