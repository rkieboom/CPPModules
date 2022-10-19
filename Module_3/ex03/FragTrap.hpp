/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/23 18:16:25 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/19 15:22:48 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& other);
		FragTrap& operator= (const FragTrap& other);
		~FragTrap();

	void	highFivesGuys();
};

#endif