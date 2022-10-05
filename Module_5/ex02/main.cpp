/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 18:30:23 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/03 12:50:10 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat s1("Ro", 42);
		s1.inc_grade();
		s1.inc_grade();
		Form f1("Coolblue", 40, 50);
		std::cout << s1 << "\n" << f1 << std::endl;
		s1.signForm(f1);
		f1.beSigned(s1);
		s1.signForm(f1);
		std::cout << "\n" << f1;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown!" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
