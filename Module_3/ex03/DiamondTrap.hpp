/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/23 18:26:15 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/13 16:02:06 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		const std::string	name;
	public:
		void	attack(const std::string& name);
		void	beRepaired(const unsigned int& amount);
		void	takeDamage(const unsigned int& amount);
		
		void	whoAmI();

	DiamondTrap(const std::string& name);
	~DiamondTrap();
};

#endif