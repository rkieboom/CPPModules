/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/23 17:13:15 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/13 15:37:53 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap a("Jan");

	a.attack("Olaf");
	a.takeDamage(3);
	a.beRepaired(3);
	a.highFivesGuys();
	a.takeDamage(119);
	a.attack("Olaf");
	return (0);
}
