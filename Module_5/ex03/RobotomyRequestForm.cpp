/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 12:52:47 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/06 00:51:33 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
	std::cout << target << " constructor called!\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << this->getName() << " deconstuctor called!\n";
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);

	/* initialize random seed: */
	srand (time(NULL));

	//its either 1 or 2
	if (rand() % 2 + 1 == 1)
		std::cout << this->getName() << " has been robotized succesfully\n";
	else
		std::cout << this->getName() << " failed to robotize :(\n";
}
