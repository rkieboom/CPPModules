/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 14:26:13 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/25 23:16:14 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called!" << std::endl;
}

Intern::Intern(Intern& other)
{
	*this = other;
}

Intern& Intern::operator= (Intern& other)
{
	(void)other;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern deconstructor called!" << std::endl;
}

Form*	Intern::ShrubberyCreation(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form* Intern::RobotomyRequest(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form* Intern::PresidentialPardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form* Intern::makeForm(std::string const& formName, std::string const& formTarget)
{
	std::string	Forms[] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	Form* (Intern:: *form[]) (std::string target) = {
		form[0] = &Intern::ShrubberyCreation,
		form[1] = &Intern::RobotomyRequest,
		form[2] = &Intern::PresidentialPardon
	};
	for(int i = 0; i < 3; i++)
		if(Forms[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*form[i])(formTarget));
		}
	std::cerr << "Form could not be found!" << std::endl;
	return nullptr;
}
