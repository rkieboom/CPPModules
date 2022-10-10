/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 18:30:23 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/06 00:36:00 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentalPardonForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	person("Bureaucrat", 1);
		ShrubberyCreationForm president("Mediamarkt");
		president.beSigned(person);
		// president.execute(person);
		person.executeForm(president);
	}
	catch(const std::exception& e)
	{
		std::cerr << "\n---------------------\nException thrown\n";
		std::cerr << e.what() << '\n';
		std::cerr << "---------------------\n" << std::endl;
	}
	
	return (0);
}
