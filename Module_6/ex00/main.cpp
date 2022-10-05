/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/04 14:33:18 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/02 16:06:52 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int argc, char **argv)
{
	Convert conv;

	if (argc == 1)
		return (0);
	conv.setString(argv[1]);
	conv.ConvertAll();
	std::cout << conv << std::endl;
	return (0);
}