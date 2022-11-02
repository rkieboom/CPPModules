/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 14:23:57 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/25 23:16:25 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern& other);
		Intern& operator= (Intern& other);
		~Intern();

		Form* makeForm(std::string const& formName, std::string const& formTarget);

		Form*	ShrubberyCreation(std::string target);
		Form*	RobotomyRequest(std::string target);
		Form*	PresidentialPardon(std::string target);
};

#endif
