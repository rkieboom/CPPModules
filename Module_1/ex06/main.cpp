/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 16:31:06 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/05 15:55:47 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl Harl;

	if (argc > 1)
		Harl.complain(argv[1]);
	else
		std::cout << "Invalid input!\n./HarlFilter [level]" << std::endl;
	return (0);
}
