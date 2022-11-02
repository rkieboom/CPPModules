/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 17:25:09 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/26 12:49:58 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template<typename t>
void	ft_toupper(t *str)
{
	std::transform(str->begin(), str->end(),str->begin(), ::toupper);
}

int	main(void)
{
	std::string test[] = {
		"bob is kaal",
		"rowan heeft haar"
	};

	::iter(test, 2, ft_toupper);

	std::cout << test[0] << "\n" << test[1] << std::endl;

	return (0);
}
