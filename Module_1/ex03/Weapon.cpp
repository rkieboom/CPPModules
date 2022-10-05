/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 14:03:06 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/05 14:29:04 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	
}

Weapon::Weapon(std::string str)
{
	weapon = str;
}

Weapon::~Weapon()
{
	
}

void		Weapon::setType(std::string str)
{
	weapon = str;
}

const std::string& Weapon::getType()
{
	return (weapon);
}