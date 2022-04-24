/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 13:19:23 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/04/24 17:59:50 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal has been created!" << std::endl;
}

Animal::Animal(const Animal& cpy)
{
	this->type = cpy.getType();
}

Animal::~Animal()
{
	std::cout << "Animal has died! :(" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Am i even a Animal?" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
