/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 16:31:09 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/12/09 21:28:28 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"


void	Karen::complain(std::string level)
{

	enum Speech {debug, info, warning, error, other};
	Speech s;

	std::map<std::string, MFP>::iterator it = fmap.find(level);
	if (it == fmap.end())
		s = other;
	else
		s = (it->first());
	
	
	// switch ()

	












	
	// int level_i;

	// if (level.compare("debug"))
	// 	level_i = 1;
	// else if (level.compare("info"));
	// 	level_i = 2;
	// else if (level.compare("warning"))
	// 	level_i = 3;
	// else if (level.compare("error"))
	// 	level_i = 4;
	// else
	// 	level_i = 0;
	// switch (level)
	// {
	// 	case 1:
	// 		debug();
	// 		info();
	// 		warning();
	// 		error();
	// 	case 2:
	// 		info();
	// 		warning();
	// 		error();
	// 	case 3:
	// 		warning();
	// 		error();
	// 	case 4:
	// 		error();
	// 	default:
	// 		std::cout << "" << endl;
	// }
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