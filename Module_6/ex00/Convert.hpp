/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/02 15:12:19 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/08 17:14:25 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>
# include <cfloat>



class Convert
{
	private:
		enum Type {
			CHAR = 0,
			INT = 1,
			DOUBLE = 2,
			FLOAT = 3,
			NONE = 4
		};
		
		std::string const&	input;
		Type				type;
		bool				avaible[4];

		char				charValue;
		int					intValue;
		double				doubleValue;
		float				floatValue;
		
		void				parse();
		void				parseChar();
		void				parseInt();
		void				parseDouble();
		void				parseFloat();
		void				setType(void);

	public:
		Convert(std::string const &);
		Convert(Convert const &);
		~Convert();

		Convert& operator=(Convert const &);
		
		Type 			getType(void);
		char			getChar(void);
		int				getInt(void);
		double			getDouble(void);
		float			getFloat(void);

		bool				isCharAVBL(void);
		bool				isIntAVBL(void);
		bool				isDoubleAVBL(void);
		bool				isFloatAVBL(void);
		
	
	
};

std::ostream	&operator<<(std::ostream& out, Convert &other);

#endif