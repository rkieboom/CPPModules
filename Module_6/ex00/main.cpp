/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/04 14:33:18 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/05/04 15:04:14 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	// int			i;
	std::string arg;

	if (argc == 1 || argc > 2)
		return (0);
	arg = argv[1];
	// std::cout << arg.find('f');
	// std::cout << "int = " << std::stoi(arg) << std::endl;
	return (0);
}