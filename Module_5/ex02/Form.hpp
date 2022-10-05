/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 21:06:03 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/03 14:33:17 by rkieboom      ########   odam.nl         */
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
		virtual Form(std::string const, int const, int const);
		virtual Form(Form const &);
		virtual ~Form();

		virtual Form& operator= (Form const &);

		virtual	std::string	getName(void);
		virtual	bool		getSigned(void);
		virtual	int			getGradeSign(void);
		virtual	int			getGradeExecute(void);
		virtual	void		beSigned(Bureaucrat &) = 0;

		class GradeTooHighException: public std::exception{
			const char *what() const throw();};
		class GradeTooLowException: public std::exception{
			const char *what() const throw();};
};

std::ostream &operator<< (std::ostream &, Form &);

#endif
