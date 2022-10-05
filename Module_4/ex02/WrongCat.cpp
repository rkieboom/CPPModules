/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 15:34:17 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/09/30 03:44:02 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called!" << std::endl;
	this->type.assign("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat deconstructor called!" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "miaaauwww.." << std::endl;
}