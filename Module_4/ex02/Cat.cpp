/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 13:19:26 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/09/30 03:45:40 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called!" << std::endl;
	this->type.assign("Cat");
	this->brain = new Brain();
}

Cat::Cat(const Cat &cpy)
{
	std::cout << "Cat copy constructor has been called!" << std::endl;
	this->type = cpy.getType();
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat deconstructor called!" << std::endl;
	delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << "miaaauwww.." << std::endl;
}