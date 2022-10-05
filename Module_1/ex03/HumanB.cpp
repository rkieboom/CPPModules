/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 14:08:21 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/05 14:28:40 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string f_name)
{
	name = f_name;
}

HumanB::HumanB(std::string f_name, Weapon& f_weapon)
{
	name = f_name;
	weapon = &f_weapon;
}

HumanB::~HumanB()
{
	
}

void	HumanB::attack(void)
{
	if (!weapon)
		std::cout << name << "  attacks with his fists\n";
	else
		std::cout << name << "  attacks with his " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &f_weapon)
{
	weapon = &f_weapon;
}
