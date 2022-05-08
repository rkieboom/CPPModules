/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/04 16:14:37 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/05/04 17:33:35 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Form
{
	private:
		const	std::string	_name;
		bool				_signed;
		const	int			_grade;
		
	public:
		Form(std::string name, bool sign, int grade);
		~Form();

		void	getName();
		void	isSigned();
		void	getGrade();

		void	beSigned();

		// void		incGrade();
		// void		decGrade();

		std::ostream &operator<<(std::ostream &output);
		class GradeTooHighException: public std::exception
		{
			const char *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char *what() const throw();
		};
};

#endif