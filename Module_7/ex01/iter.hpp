/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 17:24:34 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/10 17:39:34 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <class t>
void	iter(t *addr, t length, void(*func)(t *addr))
{
	for (t i = 0; i < length, i++)
		func(addr[i]);
}

#endif