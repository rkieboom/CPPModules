/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 16:31:09 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/12/11 16:39:50 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"


void	Karen::complain(std::string level)
{
	int num = 0;
	std::string str[4] = {"debug", "info", "warning", "error"};

	for(int i = 0;i < 4; i++)
	{
		if (!level.compare(str[i]))
		{
			num = i + 1;
			break ;
		}
	}

	switch (num)
	{
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
		case 1:
			debug();
		case 2:
			info();
		case 3:
			warning();
		case 4:
			error();
		
		
	}
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
