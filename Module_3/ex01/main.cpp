/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/26 18:07:00 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/01/27 17:28:05 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap clap1("Olaf");
	ScavTrap scav1("Peter");
	
	scav1.attack("Olaf");
	clap1.takeDamage(20);
	clap1.attack("Peter");
	scav1.takeDamage(20);
	scav1.guardGate();
	clap1.beRepaired(1);
	clap1.attack("Peter");


	return (0);
}