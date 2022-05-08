/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 17:30:21 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/05/05 14:38:46 by rkieboom      ########   odam.nl         */
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

	void	announce(void);
	void	randomChump(std::string name);
	void	giveName(std::string name);

	Zombie();
	Zombie(std::string);
	~Zombie();
};

	Zombie* zombieHorde(int N, std::string name);
	Zombie* newZombie(std::string name);

#endif