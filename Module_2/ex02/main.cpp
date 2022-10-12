#include "Fixed.hpp"

int main( void )
{ 
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "a= " << a << std::endl;
	std::cout << "b= " << b << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	if (a < b)
		std::cout << "A is smaller";
	else
		std::cout << "B is smaller";
	std::cout << std::endl;
	return 0;
}