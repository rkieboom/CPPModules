/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 13:19:33 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/04/24 18:20:41 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

#define NUMBER_OF_ANIMALS 4

int	main2(void)
{
	Animal *animals[NUMBER_OF_ANIMALS];
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
		delete animals[i];

	Dog dog;
	Dog dog2(dog);
	Dog dog3(dog2);
	Dog dog4(dog);

	const Animal* j = new Dog(dog3);
	const Animal* i = new Dog(dog);


	i->makeSound();
	j->makeSound();
	delete j;
	delete i;


	return (0);
}

int main(void)//nog niet klaar
{
	main2();
	system("leaks program");
	return (0);
}
