/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 17:24:34 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/26 12:49:12 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <stdlib.h>


template <typename t>
void	iter(t *addr, size_t length, void(*func)(t *addr))
{
	for (size_t i = 0; i < length; i++)
		func(&addr[i]);
}

#endif
