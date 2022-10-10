/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/04 14:33:18 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/08 16:22:10 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int argc, char **argv)
{
	std::string	arg;

	if (argc == 1)
		return (0);
	arg = argv[1];
	
	Convert conv(arg);
	
	std::cout << conv << std::endl;
	return (0);
}
