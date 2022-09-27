#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					FixedPoint;
		static const int	FracBit = 8;

	public:
		Fixed();
		Fixed(int const);
		Fixed(Fixed &t);
		Fixed& operator= (const Fixed& t);
		std::ostream& operator<< (std::ostream &out, Fixed const &value);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float 	toFloat(void) const;
		int 	toInt(void) const;
};

#endif