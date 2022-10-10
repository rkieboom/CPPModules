/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 21:06:03 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/06 00:47:58 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeSign;
		int const			_gradeExecute;

	public:
		Form(std::string const, int const, int const);
		Form(Form const &);
		virtual ~Form();

		Form& operator= (Form const &);

		std::string		getName(void) const;
		bool			getSigned(void) const;
		int				getGradeSign(void) const;
		int				getGradeExecute(void) const;
		void			beSigned(Bureaucrat &);
		virtual void	execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException: public std::exception{
			const char *what() const throw();};
		class GradeTooLowException: public std::exception{
			const char *what() const throw();};
		class UnsignedFormException: public std::exception{
			const char *what() const throw ();};
		class FailedToOpenFile: public std::exception{
			const char *what() const throw();};
};

std::ostream &operator<< (std::ostream &, Form &);

#endif
