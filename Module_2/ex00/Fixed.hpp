/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 17:34:22 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/09/24 00:04:29 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					FixedPoint;
		static const int	FracBit = 8;

	public:
		Fixed();
		Fixed(Fixed &t);
		Fixed& operator= (const Fixed& t);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits(int const raw);

};




#endif