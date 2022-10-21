/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 13:19:30 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/21 16:06:27 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called!" << std::endl;
	this->type.assign("Dog");
	this->brain = new Brain();
}

Dog::Dog(Dog &other)
{
	std::cout << "Dog copy constructor called!" << std::endl;
	this->type = other.type;
	this->brain = new Brain();
	*this->brain = *other.brain;
}

Dog& Dog::operator= (Dog &other)
{
	std::cout << "Dog copy assignment called!" << std::endl;
	this->type = other.type;
	this->brain = new Brain();
	*this->brain = *other.brain;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog deconstructor called!" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << "barkkkk........" << std::endl;
}

void	Dog::setIdeas(const std::string &str)
{
	int	i = 0;
	Brain *brain = this->brain;
	while (!brain->ideas[i].empty())
		i++;
	brain->ideas[i].assign(str);
}

void	Dog::printIdeas(void)
{
	Brain *brain = this->brain;
	for (int i = 0; !brain->ideas[i].empty(); i++)
		std::cout << "Idea: " << brain->ideas[i] << std::endl;
}
