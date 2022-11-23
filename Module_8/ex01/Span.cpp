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

Span::Span(unsigned int N) : _max(N)
{

}

Span::~Span()
{
}

void Span::addNumber(int const &num)
{
	if (this->_numbers.size() == this->_max)
		throw std::runtime_error("Array already filled up!");
	this->_numbers.push_back(num);
}

void	Span::fillSpan(void)
{
	srand(time(0));
	while (this->_numbers.size() < this->_max)
		this->_numbers.push_back(rand());
	//Prints the whole list
	for (std::vector< int >::iterator it = this->_numbers.begin(); it != this->_numbers.end(); ++it)
		std::cout << *it << std::endl;

	//Displays min and max
	// std::cout << "Min: " << *std::min_element(this->_numbers.begin(), this->_numbers.end()) << std::endl;
	// std::cout << "Max: " << *std::max_element(this->_numbers.begin(), this->_numbers.end()) << std::endl;
}

int Span::shortestSpan() const
{
	int	shortestSpan;
	std::vector< int > copy(this->_numbers);
	if (this->_numbers.size() <= 1)
		throw std::runtime_error("Span could not be found!");
	std::sort(copy.begin(), copy.end(), std::greater<int>());
	shortestSpan = *copy.begin() - *(copy.begin() + 1);
	for (std::vector< int >::const_iterator it = copy.begin(); it != copy.end(); ++it)
	{
		if (it + 1 != copy.end())
		{
			if ((*it - *(it + 1)) < shortestSpan)
				shortestSpan = *it - *(it + 1);
		}
	}
	return shortestSpan;
}

int Span::longestSpan() const
{
	int lowest, highest;
	if (this->_numbers.size() <= 1)
		throw std::runtime_error("Span could not be found!");

	lowest = *std::min_element(this->_numbers.begin(), this->_numbers.end());
	highest = *std::max_element(this->_numbers.begin(), this->_numbers.end());

	return highest - lowest;
}
