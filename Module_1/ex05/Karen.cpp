/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 16:31:09 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/11/06 17:41:22 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <functional>
#include <iostream>
#include <type_traits>
#include <signal.h>


void	Karen::complain(std::string level)
{
	typedef  void (Karen::*p)(void);

	std::string arr[4] = {"debug", "info", "warning", "error"};
	// p a[4] = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };

	// // std::mem_fn()
	
	void		(*p[4]) (void);
	p[0] = this->debug;
	p[1] = this->info;
	p[2] = this->warning;
	p[3] = this->error;
	
	for(int i = 0; i < 4; i++)
	{
		if (level == arr[i])
			p[i];
	}
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}
