/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 17:30:21 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/10/02 16:26:44 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string.h>

class Zombie
{

	private:

	std::string name;

	public:

	void announce(void);
	Zombie* newZombie( std::string name );
	void randomChump( std::string name );

	Zombie();
	Zombie(std::string);
	~Zombie();
};


#endif