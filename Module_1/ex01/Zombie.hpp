/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 17:30:21 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/09/26 18:48:47 by rkieboom      ########   odam.nl         */
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
	void	setNewName(std::string newName);

	Zombie();
	Zombie(std::string);
	~Zombie();
};

	void	randomChump(std::string name);
	Zombie* zombieHorde(int N, std::string name);
	Zombie* newZombie(std::string name);

#endif