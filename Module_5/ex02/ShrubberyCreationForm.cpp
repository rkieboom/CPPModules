/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 12:52:50 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/03 14:38:57 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target) : Form(target, 145, 137)
{
	std::cout << target << " constructor called!\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << this->getName() << " deconstructor called!\n";
}

