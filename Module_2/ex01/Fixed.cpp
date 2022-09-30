#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Fixed constructor called!\n";
	this->FixedPoint = 0;
}

Fixed::Fixed(int const value)
{
	std::cout << "Fixed Int Parametized constructor called!\n";
	this->FixedPoint = (value << Fixed::FracBit);
}

Fixed::Fixed(float const value)
{
	std::cout << "Fixed Float Parametized constructor called!\n";
	this->FixedPoint = (float)roundf((float)value * (float)(1 << Fixed::FracBit));
}

Fixed::Fixed(Fixed const &t)
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
	return ((float)this->FixedPoint / (float)(1 << Fixed::FracBit));
}

int Fixed::toInt(void) const
{
	return (this->FixedPoint >> Fixed::FracBit);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
}