/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 18:30:23 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/05/04 17:57:42 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat s1("Ro", 1);
		std::cout << "Name = [" << s1.getName() << "]\n";
		std::cout << "Grade = [" << s1.getGrade() << "]" << std::endl;
		s1.incre_grade();
		std::cout << s1;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception thrown!" << std::endl;
		std::cerr << e.what() << '\n';
	}
	std::cout << "Done!" << std::endl;
	return (0);
}
