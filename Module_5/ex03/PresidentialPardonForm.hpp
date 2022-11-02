/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentalPardonForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 12:52:45 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/25 22:58:40 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALARDONFORM_HPP
# define PRESIDENTIALARDONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string);
		~PresidentialPardonForm();

		virtual void	execute(Bureaucrat const & executor) const;
};

#endif
