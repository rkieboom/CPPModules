/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 13:40:35 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/11/02 15:44:00 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N), _elementsN(0), _number(new unsigned int[N]())
{
	if (!this->_number)
		throw std::bad_alloc();
}

Span::~Span()
{
	delete [] this->_number;
}

void Span::addNumber(unsigned int num)
{
	if (this->_elementsN == this->_N)//throw exeception

	this->_number[this->_elementsN] = num;
	this->_elementsN++;
}

unsigned int Span::shortestSpan() const
{
	
}

unsigned int Span::longestSpan() const
{
	
}
