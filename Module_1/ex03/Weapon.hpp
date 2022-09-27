/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 13:58:45 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/09/26 18:53:30 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
	std::string weapon;

	public:
	const std::string	getType();
	void				setType(std::string);

	Weapon();
	Weapon(std::string);
	~Weapon();
};


#endif