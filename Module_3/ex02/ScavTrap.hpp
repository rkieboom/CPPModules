/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/23 17:39:00 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/13 15:36:01 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator= (const ScavTrap& other);
		~ScavTrap();
	
	void	attack(const std::string& target);
	void	beRepaired(const unsigned int& amount);
	void	takeDamage(const unsigned int& amount);
	void	guardGate();
};

#endif