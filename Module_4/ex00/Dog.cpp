/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 13:19:30 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/09/30 03:36:42 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called!" << std::endl;
	this->type.assign("Dog");
}

Dog::~Dog()
{
	std::cout << "Dog deconstrcutor called!" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "woof woof........" << std::endl;
}
