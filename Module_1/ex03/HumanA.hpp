/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 14:05:04 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/10/03 15:02:41 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
	std::string name;
	Weapon *weapon;

	public:

	void	attack(void);
	void	setWeapon(Weapon &f_weapon);

	HumanA(std::string, Weapon &);
	~HumanA();
};

#endif