/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 13:19:30 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/21 15:33:46 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called!" << std::endl;
	this->type.assign("Dog");
}

Dog::Dog(Dog &other)
{
	std::cout << "Dog copy constructor called!" << std::endl;
	this->type = other.type;
}

Dog& Dog::operator= (Dog &other)
{
	std::cout << "Dog copy assignment called!" << std::endl;
	this->type = other.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog deconstrcutor called!" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "woof woof........" << std::endl;
}
