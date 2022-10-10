/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 12:52:52 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/06 00:50:50 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <iostream>
# include <string>
# include <fstream>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string);
		~ShrubberyCreationForm();

		virtual void	execute(Bureaucrat const & executor) const;
};

#endif
