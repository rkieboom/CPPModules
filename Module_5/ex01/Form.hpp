/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/30 21:06:03 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/03 12:47:52 by rkieboom      ########   odam.nl         */
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
		~Form();

		Form& operator= (Form const &);

		std::string getName(void);
		bool		getSigned(void);
		int			getGradeSign(void);
		int			getGradeExecute(void);
		void		beSigned(Bureaucrat &);

		class GradeTooHighException: public std::exception{
			const char *what() const throw();};
		class GradeTooLowException: public std::exception{
			const char *what() const throw();};
};

std::ostream &operator<< (std::ostream &, Form &);

#endif
