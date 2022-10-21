/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/24 13:19:33 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/21 16:21:55 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#define NUMBER_OF_ANIMALS 4

void	go(void)
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

	std::cout << "------------------------------------\n";
	Dog dog;
	dog.setIdeas("This is my first idea");
	std::cout << "Type = " << dog.getType() << std::endl;
	dog.printIdeas();
	std::cout << "------------------------------------\n";
	Dog dog2(dog);
	std::cout << "Type = " << dog.getType() << std::endl;
	dog2.printIdeas();
	std::cout << "------------------------------------\n";
	Dog dog3(dog2);
	Dog dog4(dog);

	const Animal* j = new Dog(dog3);
	const Animal* i = new Dog(dog);


	i->makeSound();
	j->makeSound();
	delete j;
	delete i;
}

int main(void)
{
	go();
	system("leaks program");
	return (0);
}
