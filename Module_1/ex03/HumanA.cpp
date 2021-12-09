/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 14:08:20 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/12/09 16:21:42 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string f_name, Weapon& f_weapon)
{
	name = f_name;
	weapon = &f_weapon;
}

HumanA::~HumanA()
{

}

void	HumanA::attack(void)
{
	if (!weapon)
		std::cout << name << "  attacks with his fists\n";
	else
		std::cout << name << "  attacks with his " << weapon->getType() << std::endl;
}

void	HumanA::setWeapon(Weapon &f_weapon)
{
	weapon = &f_weapon;
}