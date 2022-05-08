/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/04 16:14:59 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/05/04 17:51:49 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, bool sign, int grade) : _name(name), _signed(sign), _grade(grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
	std::cout << "Parameterized constructor called!" << std::endl;
}

Form::~Form()
{
	std::cout << "Deconstructor called!" << std::endl;
}

std::ostream &Form::operator<<(std::ostream &output)
{
	output << this->_name << ", has a grade of " << this->_grade << " and is ";
	if (this->_signed)
		output << "signed\n";
	else
		output << "not signed\n";
	return output;
}

void	Form::getName()
{
	std::cout << "Form name = " << this->_name << std::endl;
}

void	Form::isSigned()
{
	if (this->_signed)
		std::cout << "The form is signed." << std::endl;
	else
		std::cout << "The form is not signed." << std::endl;
}

void	Form::beSigned()
{
	if (this->_signed)
		std::cout << "Form was already signed!" << std::endl;
	else
	{
		this->_signed = true;
		std::cout << "Form is signed!" << std::endl;
	}
}

void	Form::getGrade()
{
	std::cout << this->_name << ", grade is " << this->_grade << std::endl;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

// void		Form::incGrade()//grade moet const zijn????????
// {
// 	if (this->_grade == 1)
// 		throw Form::GradeTooHighException();
// 	else
// 		this->_grade--;
// }

// void		Form::decGrade()//grade moet const zijn?????????
// {
// 	if (this->_grade == 150)
// 		throw Form::GradeTooLowException();
// 	else
// 		this->_grade++;
// }
