/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 16:31:09 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/12/09 18:08:30 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::complain(std::string level)
{
	MFP fp = fmap[level];

	(this->*fp)();
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

Karen::Karen()
{
	fmap.insert( std::make_pair( "debug", &Karen::debug ));
	fmap.insert( std::make_pair( "info", &Karen::info ));
	fmap.insert( std::make_pair( "warning", &Karen::warning ));
	fmap.insert( std::make_pair( "error", &Karen::error ));
}