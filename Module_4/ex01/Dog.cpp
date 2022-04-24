/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 13:19:30 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/04/24 15:31:22 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type.assign("Dog");
	std::cout << "Dog was created!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog died :(((((((" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "barkkkk........" << std::endl;
}
