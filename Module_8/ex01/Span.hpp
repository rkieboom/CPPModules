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
# include <vector>

class Span
{
	public:
		Span(unsigned int);
		~Span();

	void	addNumber(int const &num);
	void	fillSpan(void);
	int		shortestSpan() const;
	int		longestSpan() const;
	private:
		const unsigned int		_max;
		std::vector<int>		_numbers;
};

#endif
