/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 18:38:55 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/21 16:33:55 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string s, int grade) : name(s), grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Parameterized constructor called!\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.name)
{
	std::cout << "Copy constructor called!\n";
	this->grade = src.grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Deconstructor called!\n";
}

Bureaucrat& Bureaucrat::operator= (Bureaucrat const &src)
{
	std::cout << "Copy overload constructor called!\n";
	this->grade = src.grade;
	return *this;
}

std::string	Bureaucrat::getName()
{
	return (this->name);
}

int		Bureaucrat::getGrade()
{
	return (this->grade);
}

void	Bureaucrat::signForm(Form &src)
{
	if (src.getSigned())
		std::cout << this->getName() << " signed " << src.getName() << std::endl;
	else if (this->grade > src.getGradeSign())
		std::cout << this->getName() << " couldn't sign " << src.getName() << " because grade was to low!" << std::endl;
	else
		std::cout << this->getName() << " did not sign " << src.getName() << " yet!" << std::endl;

}

void	Bureaucrat::inc_grade()
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void	Bureaucrat::dec_grade()
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

std::ostream& operator<< (std::ostream &out, Bureaucrat &src)
{	
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return out;
}
