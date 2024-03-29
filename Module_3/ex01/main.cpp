/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/23 17:13:15 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/13 21:37:54 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a("Jan");

	a.attack("Olaf");
	a.takeDamage(3);
	a.beRepaired(3);
	a.guardGate();
	return (0);
}
