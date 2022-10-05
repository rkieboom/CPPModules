/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convert.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/02 15:12:19 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/02 16:28:36 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Convert
{
	private:
		std::string	read;

		char	character;
		int		intNumber;
		float	floatNumber;
		double	doubleNumber;

		bool	characterPos;
		bool	intNumberPos;
		bool	floatNumberPos;
		bool	doubleNumberPos;

		void	ConvertToInt();
		void	ConvertToFloat();
		void	ConvertToDouble();
		void	ConvertToChar();

	public:
		Convert();
		Convert(std::string const &);
		Convert(Convert const &);
		~Convert();
		
		Convert &operator= (const Convert &);

		bool	getIntAvaible();
		bool	getFloatAvaible();
		bool	getDoubleAvaible();
		bool	getCharAvaible();

		char	getChar();
		int		getInt();
		double	getDouble();
		float	getFloat();

		void 	ConvertAll();

		void	setString(char *);
		void	setString(std::string const &);

};

std::ostream& operator<<(std::ostream& out, Convert &conv);

#endif