/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 18:30:23 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/25 23:20:41 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <string>
#include <iostream>

int	main(void)
{
	Bureaucrat burea("olaf", 1);
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("randomfile", "Bender");
	if (rrf)
	{
		std::cout << "Succes" << std::endl;
		rrf->beSigned(burea);
		rrf->execute(burea);
	}
		
	return (0);
}
