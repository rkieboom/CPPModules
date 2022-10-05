/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 15:33:19 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/09/30 03:43:44 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal deconstructor called!" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Am i even a Animal?" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
