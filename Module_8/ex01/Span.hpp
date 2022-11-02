/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 13:25:03 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/11/01 14:03:56 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <new>
# include <exception>
# include <iostream>

class Span
{
	public:
		Span(unsigned int);
		~Span();

	void	addNumber(unsigned int);
	unsigned int	shortestSpan() const;
	unsigned int	longestSpan() const;
	private:
		const unsigned int	_N;
		unsigned int		_elementsN;
		unsigned int		*_number;
};

#endif