/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 16:08:38 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/11/01 12:54:58 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <map>
#include <iostream>

int	main(void)
{
	std::vector<int> test;
	std::list<int> test2;

	test.push_back(12);
	test.push_back(43);
	test.push_back(42);

	test2.push_back(32);
	test2.push_back(6);
	test2.push_back(8);
	test2.push_back(10);

	try
	{
		std::cout << easyfind(test, 42) << std::endl;
		std::cout << easyfind(test2, 9) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
