/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/23 18:16:25 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/13 15:42:27 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& other);
		FragTrap& operator= (const FragTrap& other);
		~FragTrap();

	void	attack(const std::string& target);
	void	takeDamage(const unsigned int& amount);
	void	beRepaired(const unsigned int& amount);
	void	highFivesGuys();
};

#endif