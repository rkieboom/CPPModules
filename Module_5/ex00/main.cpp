/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 18:30:23 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/09/30 21:02:25 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat s1("Ro", 1);
	try
	{
		std::cout << "Name = [" << s1.getName() << "]\n";
		std::cout << "Grade = [" << s1.getGrade() << "]" << std::endl;
		s1.inc_grade();
		std::cout << s1;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown!" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << std::endl;
	try
	{
		Bureaucrat s2(s1);
		Bureaucrat s3("Jeroen", 37);

		s3 = s2;
		std::cout << "Name = [" << s2.getName() << "]\n";
		std::cout << "Grade = [" << s2.getGrade() << "]" << std::endl;
		s2.dec_grade();
		std::cout << s2;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown!" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << "Done!" << std::endl;
	return (0);
}
