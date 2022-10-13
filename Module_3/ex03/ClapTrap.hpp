/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/23 17:09:44 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/13 15:12:35 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	protected:
		const std::string	name;
		int					hitPoints;
		int					energyPoints;
		int					attackDamage;
	public:
		ClapTrap(const std::string& name);
		ClapTrap(const std::string& name, const int& hitPoints, const int& energyPoints, const int& attackDamage);
		ClapTrap(const ClapTrap &other);
		ClapTrap& operator= (const ClapTrap& other);
		~ClapTrap();

	virtual void	attack(const std::string& target);
	virtual void	takeDamage(const unsigned int& amount);
	virtual void	beRepaired(const unsigned int& amount);
};


#endif