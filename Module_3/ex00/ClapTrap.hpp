/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/26 18:07:02 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/01/26 18:16:17 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap
{
	private:
	std::string	name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;

	public:
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	ClapTrap(std::string);
	~ClapTrap();
};



#endif