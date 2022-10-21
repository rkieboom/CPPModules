/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 15:41:01 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/21 15:49:46 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called!" << std::endl;
}

Brain::Brain(Brain &other)
{
	std::cout << "Brain copy constructor called!" << std::endl;
	std::copy(other.ideas, other.ideas + 100, this->ideas);	
}

Brain& Brain::operator= (Brain &other)
{
	std::cout << "Brain copy assign called!" << std::endl;
	std::copy(other.ideas, other.ideas + 100, this->ideas);
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor called!" << std::endl;
}
