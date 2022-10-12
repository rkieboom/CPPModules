/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 17:34:39 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/12 14:57:26 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called!\n";
	return (this->FixedPoint);
} 

void Fixed::setRawBits(int const raw)
{
	this->FixedPoint = raw;
}

Fixed::Fixed() : FixedPoint(0)
{
	std::cout << "Fixed constructor called!\n";
}

Fixed::~Fixed()
{
	std::cout << "Fixed deconstructor called!\n";
}

Fixed::Fixed(Fixed &t)
{
	std::cout << "Fixed Copy constructor called!\n";
	this->FixedPoint = t.getRawBits();
}

Fixed& Fixed::operator= (const Fixed& t)
{
	std::cout << "Fixed overload assignment called!\n";
	this->FixedPoint = t.getRawBits();

	return *this;
}

