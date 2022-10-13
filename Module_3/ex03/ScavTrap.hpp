/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/23 17:39:00 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/13 15:49:10 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator= (const ScavTrap& other);
		~ScavTrap();
	
	virtual void	attack(const std::string& target);
	virtual void	beRepaired(const unsigned int& amount);
	virtual void	takeDamage(const unsigned int& amount);
	void	guardGate();
};

#endif