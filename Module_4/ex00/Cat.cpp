/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 13:19:26 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/04/24 14:01:45 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat was created!" << std::endl;
	// this->type = "Cat";
	this->type.assign("Cat");
}

Cat::~Cat()
{
	std::cout << "Cat died :(((((((" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "miaaauwww.." << std::endl;
}