/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 17:59:13 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/08 17:15:56 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string const &str) : input(str), type(NONE)
{
	std::cout << "Constructor called!" << std::endl;
	for (int i = 0; i < 4; i++)
		this->avaible[i] = false;
	this->setType();
	this->parse();
}

Convert::Convert(Convert const &other) : input(other.input), type(other.type)
{
	std::cout << "Copy constructor called" << std::endl;

	this->intValue		= other.intValue;
	this->charValue		= other.charValue;
	this->floatValue	= other.floatValue;
	this->doubleValue	= other.doubleValue;
}

Convert::~Convert()
{
	std::cout << "Deconstructor called!" << std::endl;
}

Convert& Convert::operator=(Convert const &other)
{
	std::cout << "Copy overload constructor called" << std::endl;

	this->type			= other.type;
	this->intValue		= other.intValue;
	this->charValue		= other.charValue;
	this->floatValue	= other.floatValue;
	this->doubleValue	= other.doubleValue;
	return *this;
}

void	Convert::setType()
{
	size_t	i = 0;
	if (this->input.length() == 0)
		return ;
	else if (this->input.length() == 1 && !std::isdigit(this->input[0]))
	{
		type = CHAR;
		return ;
	}
	if (!this->input.compare("-inff") || !this->input.compare("+inff") ||
	!this->input.compare("nanf"))
	{
		type = FLOAT;
		return ;
	}
	else if (!this->input.compare("-inf") || !this->input.compare("+inf") ||
	!this->input.compare("nan"))
	{
		type = DOUBLE;
		return ;
	}
	if (this->input[i] == '+')
	{
		i++;
		if (this->input.length() == i)
			return ;
	}
	else if (this->input[i] == '-')
	{
		i++;
		if (this->input.length() == i)
			return ;
	}

	if (!std::isdigit(this->input.at(i)))
		return ;
	if (this->input.find('.') == std::string::npos)
	{
		type = INT;
		return ;
	}

	if (this->input.find('f') == std::string::npos)
	{
		type = DOUBLE;
		return ;
	}
	else
	{
		type = FLOAT;
		return ;
	}
}


void	Convert::parseChar()
{
	this->avaible[CHAR] = true;
	this->charValue = this->input.at(0);
	this->intValue = static_cast<int>(this->charValue);
	this->doubleValue = static_cast<double>(this->charValue);
	this->floatValue = static_cast<float>(this->charValue);
	this->avaible[FLOAT] = true;
	this->avaible[DOUBLE] = true;
	this->avaible[INT] = true;
}

void	Convert::parseInt()
{
	if (std::atoi(this->input.c_str()) != std::atol(this->input.c_str()))
		return ;
	this->avaible[INT] = true;
	this->intValue = std::atoi(this->input.c_str());
	this->charValue = static_cast<char>(this->intValue);
	this->doubleValue = static_cast<double>(this->intValue);
	this->floatValue = static_cast<float>(this->intValue);
	if (this->charValue >= 33 && this->charValue <= 126)
		this->avaible[CHAR] = true;
	this->avaible[FLOAT] = true;
	this->avaible[DOUBLE] = true;
}

void	Convert::parseDouble()
{
	this->avaible[DOUBLE] = true;
	this->doubleValue = std::atof(this->input.c_str());
	this->charValue = static_cast<char>(this->doubleValue);
	this->intValue = static_cast<int>(this->doubleValue);
	this->floatValue = static_cast<float>(this->doubleValue);
	if (this->charValue >= 33 && this->charValue <= 126)
		this->avaible[CHAR] = true;
	this->avaible[FLOAT] = true;
	if (this->input.compare("nan"))
		this->avaible[INT] = true;
}

void	Convert::parseFloat()
{
	this->avaible[FLOAT] = true;
	this->floatValue = std::stof(this->input.c_str());
	this->charValue = static_cast<char>(this->floatValue);
	this->intValue = static_cast<int>(this->floatValue);
	this->doubleValue = static_cast<double>(this->floatValue);
	if (this->charValue >= 33 && this->charValue <= 126)
		this->avaible[CHAR] = true;
	this->avaible[DOUBLE] = true;
	if (this->input.compare("nanf"))
		this->avaible[INT] = true;
}



void	Convert::parse()
{
	switch (this->getType())
	{
		case CHAR:
			parseChar();
			break ;
		case INT:
			parseInt();
			break ;
		case DOUBLE:
			parseDouble();
			break ;
		case FLOAT:
			parseFloat();
		case NONE:
			break ;
	}
}

Convert::Type 	Convert::getType(void)
{
	return this->type;
}
char			Convert::getChar(void)
{
	return this->charValue;
}

int			Convert::getInt(void)
{
	return this->intValue;
}

double			Convert::getDouble(void)
{
	return this->doubleValue;
}

float			Convert::getFloat(void)
{
	return this->floatValue;
}



bool				Convert::isCharAVBL(void)
{
	return (this->avaible[CHAR]);
}

bool				Convert::isIntAVBL(void)
{
	return (this->avaible[INT]);
}

bool				Convert::isDoubleAVBL(void)
{
	return (this->avaible[DOUBLE]);
}

bool				Convert::isFloatAVBL(void)
{
	return (this->avaible[FLOAT]);
}



std::ostream	&operator<<(std::ostream& out, Convert &other)
{
	switch (other.getType())
	{
		case 0:
			out << "This is type Char" << std::endl;
			break ;
		case 1:
			out << "This is type Int" << std::endl;
			break ;
		case 2:
			out << "This is type Double" << std::endl;
			break ;
		case 3:
			out << "This is type Float" << std::endl;
			break ;
		case 4:
			out << "This is type None" << std::endl;
			break ;
	}
	out << std::endl;
	out << "char: ";
	if (other.isCharAVBL())
		out << "'" << other.getChar() << "'";
	else
		out << "Non displayable";
	out << std::endl;

	out << "int: ";
	if (other.isIntAVBL())
		out << other.getInt();
	else
		out << "impossible";
	out << std::endl;

	if (other.getType() == 0 || other.getType() == 1)
		out << std::setprecision(1);

	out << "float: ";
	if (other.isFloatAVBL())
	{
		if (other.getType() == 0 || other.getType() == 1)
			out << std::fixed << other.getFloat() << "f";
		else
			out << other.getFloat() << "f";
	}
	else
		out << "impossible";
	out << std::endl;

	out << "double: ";
	if (other.isDoubleAVBL())
	{
		if (other.getType() == 0 || other.getType() == 1)
			out << std::fixed << other.getDouble();
		else
			out << other.getDouble();
	}
	else
		out << "impossible";
	out << std::endl;
	return out;
}
