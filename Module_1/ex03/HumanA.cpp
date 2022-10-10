/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 14:08:20 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/08 18:37:05 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string f_name, Weapon& f_weapon) : name(f_name), weapon(f_weapon)
{

}

HumanA::~HumanA()
{

}

void	HumanA::attack(void)
{
	std::cout << name << "  attacks with his " << weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon &f_weapon)
{
	weapon = f_weapon;
}
