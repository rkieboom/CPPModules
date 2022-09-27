#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Fixed constructor called!\n";
	this->FixedPoint = 0;
}

Fixed::Fixed(int const value)
{
	std::cout << "Fixed Int Parametized constructor called!\n";
	this->value = (value << Fixed::FracBit);
}

Fixed::Fixed(float const value)
{
	std::cout << "Fixed Float Parametized constructor called!\n";
	this->value = (float)roundf((float)value * (float)(1 << Fixed::FracBit));
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

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
}

Fixed::~Fixed()
{
	std::cout << "Fixed deconstructor called!\n";
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called!\n";
	return (this->FixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	this->FixedPoint = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << Fixed::bits));
}

int Fixed::toInt(void) const
{
	return (this->value >> Fixed::bits);
}