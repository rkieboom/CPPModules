/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/23 18:26:15 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/04/23 20:08:47 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap :  protected ScavTrap,  protected FragTrap
{
	private:
		std::string name;
	public:
		void	attack(const std::string& name);
		void	whoAmI();

	DiamondTrap(std::string name);
	~DiamondTrap();
};

#endif