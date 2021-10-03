/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 14:05:05 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/10/03 15:00:47 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
	std::string name;
	Weapon *weapon;

	public:
	void	attack(void);
	void	setWeapon(Weapon &f_weapon);

	HumanB();
	HumanB(std::string);
	HumanB(std::string, Weapon &);
	~HumanB();
};

#endif