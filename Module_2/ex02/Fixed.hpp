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
		~Fixed();

		Fixed&	operator= (Fixed const &);
		bool	operator> (Fixed const &);
		bool	operator< (Fixed const &);
		bool	operator>= (Fixed const &);
		bool	operator<= (Fixed const &);
		bool	operator== (Fixed const &);
		bool	operator!= (Fixed const &);

		Fixed	operator+ (Fixed const &);
		Fixed	operator- (Fixed const &);
		Fixed	operator* (Fixed const &);
		Fixed	operator/ (Fixed const &);

		Fixed&	operator++ (void);
		Fixed	operator++ (int);
		Fixed&	operator-- (void);
		Fixed	operator-- (int);

		static Fixed&	min(Fixed &, Fixed &);
		static const Fixed&	min(Fixed const &, Fixed const &);
		static Fixed&	max(Fixed &, Fixed &);
		static const Fixed&	max(Fixed const &, Fixed const &);

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float 	toFloat(void) const;
		int 	toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif