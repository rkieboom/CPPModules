/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 18:38:55 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/05/04 17:57:25 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string s, int grade) : name(s), grade(grade)
{
	std::cout << "Parameterized constructor called!" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

std::ostream& Bureaucrat::operator<<(std::osteam& output)
{
	output << "Name = " << this->name << std::endl \
	<< "Grade = " << this->grade << std::endl;
	return output;
}


Bureaucrat::~Bureaucrat()
{
	std::cout << "Deconstructor called!" << std::endl;
}

void	Bureaucrat::getName()
{
	std::cout << "bureaucrat name = " << this->name;
}

void	Bureaucrat::getGrade()
{
	std::cout << "Grade = " << this->grade << std::endl;
}

void	Bureaucrat::incre_grade()
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void	Bureaucrat::decre_grade()
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}