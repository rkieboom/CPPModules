/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 15:34:17 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/04/24 15:34:48 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat was created!" << std::endl;
	this->type.assign("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat died :(((((((" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "miaaauwww.." << std::endl;
}