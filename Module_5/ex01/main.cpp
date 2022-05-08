/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 18:30:23 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/05/04 17:38:28 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Form f("Rowan", false, 1);
		f.beSigned();
		std::cout << f;//not working
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception catched:\n";
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Done!" << std::endl;
	return (0);
}
