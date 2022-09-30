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
		Fixed(float const);
		Fixed(Fixed const &);
		Fixed& operator= (Fixed const &);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float 	toFloat(void) const;
		int 	toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif