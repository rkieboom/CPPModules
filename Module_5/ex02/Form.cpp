/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 21:06:05 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/03 14:33:05 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, int const gradeSign, int const gradeExecute) : _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (_gradeSign > 150 || _gradeExecute > 150)
		throw Form::GradeTooLowException();
	else if (_gradeSign < 1 || _gradeExecute < 1)
		throw Form::GradeTooHighException();
	std::cout << "Form parametized contructor called!\n";	
	this->_signed = false;
}

Form::Form(Form const &src) : _name(src._name), _gradeSign(src._gradeSign), _gradeExecute(src._gradeExecute)
{
	if (_gradeSign > 150 || _gradeExecute > 150)
		throw Form::GradeTooLowException();
	else if (_gradeSign < 1 || _gradeExecute < 1)
		throw Form::GradeTooHighException();
	std::cout << "Form copy constructor called!\n";
	this->_signed = src._signed;
}

Form::~Form()
{
	std::cout << "Form deconstructor called!\n";
}

Form& Form::operator=(Form const &src)
{
	std::cout << "Form overload copy called!\n";
	this->_signed = src._signed;
	return *this;
}



std::string Form::getName(void)
{
	return (this->_name);
}

bool		Form::getSigned(void)
{
	return (this->_signed);
}

int			Form::getGradeSign(void)
{
	return (this->_gradeSign);
}

int			Form::getGradeExecute(void)
{
	return (this->_gradeExecute);
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

std::ostream &operator<< (std::ostream &out, Form &src)
{
	out << src.getName() << " gradeSign =  " << src.getGradeSign()
	<< "\nand gradeExecute = " << src.getGradeExecute() << "\nForm is ";
	if (src.getSigned())
		out << "Signed.";
	else
		out << "not Signed.";
	out << std::endl;
	return out;
}