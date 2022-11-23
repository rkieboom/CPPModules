/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/04 18:19:03 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/10 17:18:03 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

template <class t>
t	max(t a, t b)
{
	return ((a > b) ? a : b);
};

template <class t>
t	min(t a, t b)
{
	return ((a < b) ? a : b);
}

template <class t>
void	swap(t &a, t &b)
{
	t temp;

	temp = b;
	b = a;
	a = temp;
}

#endif