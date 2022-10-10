/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 21:06:05 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/06 00:50:22 by rkieboom      ########   odam.nl         */
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



std::string Form::getName(void) const
{
	return (this->_name);
}

bool		Form::getSigned(void) const
{
	return (this->_signed);
}

int			Form::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int			Form::getGradeExecute(void)const 
{
	return (this->_gradeExecute);
}

void		Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() > this->getGradeSign())
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char *Form::UnsignedFormException::what() const throw()
{
	return ("Form is not signed!");
}

const char *Form::FailedToOpenFile::what() const throw()
{
	return ("Form failed to open file!");
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (!Form::getSigned())
		throw Form::UnsignedFormException();
	else if (executor.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
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
