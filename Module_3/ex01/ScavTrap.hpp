/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/23 17:39:00 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/04/23 18:31:04 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : protected ClapTrap
{
	// private:
	// 	std::string name;
	// 	int			hitPoints;
	// 	int			energyPoints;
	// 	int			attackDamage;
	public:
		void	attack(const std::string& target);
		void	beRepaired(unsigned int amount);
		void	takeDamage(unsigned int amount);
		void	guardGate();

	ScavTrap(std::string name);
	~ScavTrap();
};

#endif