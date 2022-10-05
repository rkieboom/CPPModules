/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 13:19:26 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/09/30 03:36:17 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat contructor called!" << std::endl;
	this->type.assign("Cat");
}

Cat::~Cat()
{
	std::cout << "Cat deconstructor called!" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "miaaauwww.." << std::endl;
}