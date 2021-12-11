/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 16:31:06 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/12/11 16:42:25 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;

	if (argc > 1)
		karen.complain(argv[1]);
	else
		std::cout << "Invalid input!\n./karenFilter [level]" << std::endl;
	return (0);
}