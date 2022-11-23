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
#include <exception>

template <typename T>
int	easyfind(T t, int n)
{
	typename T::iterator it;
	it = std::find(t.begin(), t.end(), n);

	if (it == t.end())
		throw std::runtime_error("Couldn't find the number!");
	return *it;
}
