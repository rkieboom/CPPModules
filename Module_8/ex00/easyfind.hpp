/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 16:07:34 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/26 21:06:07 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>

template <typename T>
void	easyfind(T t, int n)
{
	if (std::find(t.begin(), t.end(), n) == t.end())
		std::cerr << "Couldn't find the number" << std::endl;
}
