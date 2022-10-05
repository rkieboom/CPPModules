/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 18:36:46 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/02 14:54:54 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(std::string s, int grade);
		Bureaucrat(Bureaucrat const &);
		~Bureaucrat();

		Bureaucrat& operator=(Bureaucrat const &);

		void			inc_grade();
		void			dec_grade();
		std::string		getName();
		int				getGrade();
		void			signForm(Form &src);
		
		class GradeTooHighException: public std::exception{
			const char *what() const throw();};
		class GradeTooLowException: public std::exception{
			const char *what() const throw();};
	private:
		const std::string	name;
		int					grade;
};

std::ostream& operator<<(std::ostream &, Bureaucrat &);

#endif
