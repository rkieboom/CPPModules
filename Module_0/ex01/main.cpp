/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/30 13:33:50 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/09/30 13:34:04 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	printInstructions(void)
{
	system("clear");
	std::cout << "Welcome to the phonebook.\nType \"ADD\" to add a "<<
	"contact\nType \"SEARCH\" to search for a contact\n" <<
	"Type \"EXIT\" to exit the phonebook\n";
}

int main(void)
{
	int i;
	phoneBook phoneBook;
	std::string input;

	i = 0;
	while (1)
	{
		printInstructions();
		std::getline (std::cin,input);
		if (!input.compare("ADD"))
		{
			system("clear");
			phoneBook.addContact(i);
			std::cout << "Contact Added! Press enter to continue...";
			std::cin.ignore();
			i++;
		}
		else if (!input.compare("SEARCH"))
			phoneBook.printContacts();
		else if (!input.compare("EXIT"))
			exit(0);
	}
	return (0);
}