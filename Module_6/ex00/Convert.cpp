/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/02 15:07:35 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/02 16:32:24 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	Convert::ConvertToInt()
{
	if (isnumber(this->read[0]))
	{
		this->intNumber = stoi(this->read);
		this->intNumberPos = true;
	}
}

void	Convert::ConvertToFloat()
{
	if (isnumber(this->read[0]))
	{
		this->floatNumber = std::stof(read);
		this->floatNumberPos = true;
	}
}

void	Convert::ConvertToDouble()
{
	if (isnumber(this->read[0]))
	{
		this->doubleNumber = std::stod(read);
		this->doubleNumberPos = true;
	}
}

void	Convert::ConvertToChar()
{
	if (this->intNumberPos && this->intNumber > 32 && this->intNumber < 127)
	{
		this->character = this->intNumber;
		this->characterPos = true;
	}
}



Convert::Convert()
{
	this->read = "";
	this->character = 33;
	this->doubleNumber = 0;
	this->intNumber = 0;
	this->floatNumber = 0;

	this->characterPos = false;
	this->intNumberPos = false;
	this->floatNumberPos = false;
	this->doubleNumberPos = false;
}

Convert::Convert(std::string const &str)
{
	this->read = str;
	this->character = 33;
	this->doubleNumber = 0;
	this->intNumber = 0;
	this->floatNumber = 0;

	this->characterPos = false;
	this->intNumberPos = false;
	this->floatNumberPos = false;
	this->doubleNumberPos = false;
}


Convert::Convert(Convert const &src)
{
	this->read = src.read;
	this->character = src.character;
	this->doubleNumber = src.doubleNumber;
	this->intNumber = src.intNumber;
	this->floatNumber = src.floatNumber;

	this->characterPos = src.characterPos;
	this->intNumberPos = src.intNumberPos;
	this->floatNumberPos = src.floatNumberPos;
	this->doubleNumberPos = src.doubleNumberPos;
}

Convert::~Convert()
{
	
}

Convert& Convert::operator= (const Convert& src)
{
	this->read = src.read;
	this->character = src.character;
	this->doubleNumber = src.doubleNumber;
	this->intNumber = src.intNumber;
	this->floatNumber = src.floatNumber;

	this->characterPos = src.characterPos;
	this->intNumberPos = src.intNumberPos;
	this->floatNumberPos = src.floatNumberPos;
	this->doubleNumberPos = src.doubleNumberPos;
	return *this;
}

bool	Convert::getIntAvaible()
{
	return this->intNumberPos;
}

bool	Convert::getFloatAvaible()
{
	return this->floatNumberPos;
}
bool	Convert::getDoubleAvaible()
{
	return this->doubleNumberPos;
}
bool	Convert::getCharAvaible()
{
	return this->characterPos;
}



char	Convert::getChar()
{
	return this->character;
}
int		Convert::getInt()
{
	return this->intNumber;
}
double	Convert::getDouble()
{
	return this->doubleNumber;
}
float	Convert::getFloat()
{
	return this->floatNumber;
}



void	Convert::ConvertAll()
{
	this->ConvertToInt();
	this->ConvertToFloat();
	this->ConvertToDouble();
	this->ConvertToChar();
}

void	Convert::setString(char *str)
{
	std::string newstr(str);
	this->read = newstr;
}

void	Convert::setString(std::string const &str)
{
	this->read = str;
}


std::ostream& operator<<(std::ostream& out, Convert &conv)
{
	out << "char: ";
	if (conv.getCharAvaible())
		out << conv.getChar() << "\n";
	else
		out << "Non displayable\n";
	
	out << "int: ";
	if (conv.getIntAvaible())
		out << conv.getInt() << "\n";
	else
		out << "impossible\n";

	out << "float: ";
	if (conv.getFloatAvaible())
		out << std::setprecision(1) << std::fixed << conv.getFloat();
	else
		out << "nan";
	out << "f\n";

	out << "double: ";
	if (conv.getDoubleAvaible())
		out << conv.getDouble();
	else
		out << "nan";
	// out << std::setprecision(0);
	return out;
}
