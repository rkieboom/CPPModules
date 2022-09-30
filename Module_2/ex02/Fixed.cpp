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

Fixed::~Fixed()
{
	std::cout << "Fixed deconstructor called!\n";
}



Fixed& Fixed::operator= (const Fixed& src)
{
	std::cout << "Fixed overload assignment called!\n";
	this->FixedPoint = src.getRawBits();

	return *this;
}

bool	Fixed::operator> (Fixed const &src)
{
	if (this->FixedPoint > src.FixedPoint)
		return true;
	return false;
}

bool	Fixed::operator< (Fixed const &src)
{
	if (this->FixedPoint < src.FixedPoint)
		return true;
	return false;
}
 
bool	Fixed::operator>= (Fixed const &src)
{
	if (this->FixedPoint >= src.FixedPoint)
		return true;
	return false;
}
bool	Fixed::operator<= (Fixed const &src)
{
	if (this->FixedPoint <= src.FixedPoint)
		return true;
	return false;
}
bool	Fixed::operator== (Fixed const &src)
{
	if (this->FixedPoint == src.FixedPoint)
		return true;
	return false;
}
bool	Fixed::operator!= (Fixed const &src)
{
	if (this->FixedPoint != src.FixedPoint)
		return true;
	return false;
}



Fixed	Fixed::operator+ (Fixed const &src)
{
	Fixed ret;

	ret.FixedPoint = this->FixedPoint + src.FixedPoint;
	return ret;
}

Fixed	Fixed::operator- (Fixed const &src)
{
	Fixed ret;

	ret.FixedPoint = this->FixedPoint - src.FixedPoint;
	return ret;
}
Fixed	Fixed::operator* (Fixed const &src)
{
	Fixed ret;

	ret.FixedPoint = (this->FixedPoint * src.FixedPoint) / (1 << this->FracBit);
	return ret;
}
Fixed	Fixed::operator/ (Fixed const &src)
{
	Fixed ret;

	ret.FixedPoint = this->FixedPoint * (1 << this->FracBit) / src.FixedPoint;
	return ret;
}



Fixed&	Fixed::operator++ (void)
{
	this->FixedPoint++;
	return *this;
}

Fixed	Fixed::operator++ (int)
{
	Fixed tmp(*this);

	operator++();
	return tmp;
}

Fixed&	Fixed::operator-- (void)
{
	this->FixedPoint--;
	return *this;
}

Fixed	Fixed::operator-- (int)
{
	Fixed tmp(*this);

	operator--();
	return tmp;
}



Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a.FixedPoint <= b.FixedPoint)
		return a;
	return b;
}
const Fixed&	Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.FixedPoint <= b.FixedPoint)
		return a;
	return b;
}
Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a.FixedPoint >= b.FixedPoint)
		return a;
	return b;
}
const Fixed&	Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.FixedPoint >= b.FixedPoint)
		return a;
	return b;
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