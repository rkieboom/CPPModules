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
	Span test(5);

	test.addNumber(22);
	test.addNumber(42);
	test.addNumber(12);
	test.addNumber(43);
	test.addNumber(1);

	std::cout << test.shortestSpan() << std::endl;
	std::cout << test.longestSpan() << std::endl;

	return 0;
}
