/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 16:31:09 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/12/11 16:40:03 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::complain(std::string level)
{
	void	(Karen::*memFunc[4]) ();
	std::string str[4] = {"debug", "info", "warning", "error"};

	memFunc[0] = &Karen::debug;
	memFunc[1] = &Karen::info;
	memFunc[2] = &Karen::warning;
	memFunc[3] = &Karen::error;
	for(int i = 0;i < 4; i++)
	{
		if (!level.compare(str[i]))
		{
			(this->*memFunc[i])();
			break ;
		}
		else if (i == 3)
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
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
