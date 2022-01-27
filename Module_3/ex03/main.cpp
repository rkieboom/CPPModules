/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/26 18:07:00 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/01/27 20:10:18 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	ClapTrap clap1("Olaf");
	FragTrap frag1("Peter");
	
	frag1.attack("Olaf");
	clap1.takeDamage(20);
	clap1.attack("Peter");
	frag1.takeDamage(20);
	frag1.highFivesGuys();
	clap1.beRepaired(1);
	clap1.attack("Peter");


	return (0);
}