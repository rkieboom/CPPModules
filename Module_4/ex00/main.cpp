/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 13:19:33 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/04/24 15:37:04 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "Meta = [" << meta->getType() << "]" << std::endl;
	std::cout << "i = [" << i->getType() << "]" << std::endl;
	std::cout << "j = [" << j->getType() << "]" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* k = new WrongCat();

	std::cout << "k = [" << k->getType() << "]" << std::endl;
	k->makeSound();

	return (0);
}