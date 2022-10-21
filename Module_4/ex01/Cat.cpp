/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 13:19:26 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/21 15:58:10 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called!" << std::endl;
	this->type.assign("Cat");
	this->brain = new Brain();
}

Cat::Cat(Cat &other)
{
	std::cout << "Cat copy constructor called!" << std::endl;
	this->type = other.type;
	this->brain = new Brain();
	*this->brain = *other.brain;
}

Cat& Cat::operator= (Cat &other)
{
	std::cout << "Cat copy assignment called!" << std::endl;
	this->type = other.type;
	this->brain = new Brain();
	*this->brain = *other.brain;
	return *this;
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