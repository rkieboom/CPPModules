/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 13:19:30 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/04/24 17:50:35 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog was created!" << std::endl;
	this->type.assign("Dog");
	this->brain = new Brain();
}

Dog::Dog(const Dog &cpy)
{
	std::cout << "Dog copy constructor has been called!" << std::endl;
	*this = cpy;
	this->brain = new Brain();
}

// Dog::Dog(const Animal &cpy)
// {

// }

Dog::~Dog()
{
	std::cout << "Dog died :(((((((" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << "barkkkk........" << std::endl;
}
