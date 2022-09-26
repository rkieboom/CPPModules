/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 17:34:39 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/09/24 00:04:39 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits() const
{
	return (this->FixedPoint);
} 

void Fixed::setRawBits(int const raw)
{
	this->FixedPoint = raw;
}

Fixed::Fixed()
{
	std::cout << "Fixed constructor called!\n";
}

Fixed::~Fixed()
{
	std::cout << "Fixed deconstructor called!\n";
}

Fixed::Fixed(Fixed &t)
{
	this->FixedPoint = t.FixedPoint;
	std::cout << "Fixed Copy constructor called!\n";
}

Fixed& Fixed::operator= (const Fixed& t)
{
	std::cout << "Fixed overload assignment called!\n";
	this->FixedPoint = t.FixedPoint;

	return *this;
	
}

