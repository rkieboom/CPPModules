/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/23 17:13:15 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/04/23 17:34:18 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Jan");

	a.attack("Olaf");
	a.takeDamage(3);
	a.beRepaired(3);
	return (0);
}
