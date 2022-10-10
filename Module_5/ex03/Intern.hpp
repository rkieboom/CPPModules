/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 14:23:57 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/06 14:28:53 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern
{
	public:
		Intern();
		~Intern();

		Form& makeForm(std::string& form, std::string& target);
};

#endif