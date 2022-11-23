/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 13:24:34 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/11/01 14:10:27 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int	main(void)
{
	Span test(3);

	// test.addNumber(0);
	try 
	{
		test.fillSpan();
		std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
		std::cout << "Longest span: " << test.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	// test.addNumber(22);
	// test.addNumber(42);
	// test.addNumber(12);
	// test.addNumber(43);
	// test.addNumber(1);

	// test.addNumber(6);
	// test.addNumber(3);
	// test.addNumber(17);
	// test.addNumber(9);
	// test.addNumber(11);


	return 0;
}
