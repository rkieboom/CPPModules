/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 18:36:46 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/05/04 16:06:48 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	public:
		Bureaucrat(std::string s, int grade);
		~Bureaucrat();

		void		incre_grade();
		void		decre_grade();
		void		getName();
		void		getGrade();
		
		class GradeTooHighException: public std::exception
		{
			const char *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char *what() const throw();
		};
	private:
		const std::string	name;
		int					grade;
};

#endif