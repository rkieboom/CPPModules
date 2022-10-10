/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentalPardonForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 12:52:44 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/06 00:49:36 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentalPardonForm.hpp"

PresidentalPardonForm::PresidentalPardonForm(std::string target) : Form(target, 25, 5)
{
	std::cout << target << " constructor called!\n";
}

PresidentalPardonForm::~PresidentalPardonForm()
{
	std::cout << this->getName() << " deconstructor called!" << std::endl;
}

void	PresidentalPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
