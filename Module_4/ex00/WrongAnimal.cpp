/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 15:33:19 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/04/24 15:37:25 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal has been created!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal has died! :(" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Am i even a Animal?" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
