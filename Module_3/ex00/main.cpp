/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/26 18:07:00 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/01/27 17:04:55 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap s("Olaf");
	s.attack("Hoo");
	s.takeDamage(rand() % 10 + 1);
	s.beRepaired(1);
	s.takeDamage(rand() % 10 + 1);
	s.attack("Ro");


	return (0);
}