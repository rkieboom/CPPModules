/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentalPardonForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 12:52:45 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/06 00:48:18 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTALPARDONFROM_HPP
# define PRESIDENTALPARDONFROM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentalPardonForm : public Form
{
	public:
		PresidentalPardonForm(std::string);
		~PresidentalPardonForm();

		virtual void	execute(Bureaucrat const & executor) const;
};

#endif
