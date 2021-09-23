/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 11:39:45 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/09/23 15:07:13 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	addContact(phoneBook *phoneBook, int ID)
{
	int i;
	int lowest_ID;

	i = 0;
	while (i <= 7 && phoneBook[i].contact_exist())
		i++;
	if (phoneBook[i].contact_exist())
	{
		i = 1;
		lowest_ID = phoneBook[0].get_ID();
		while (i <= 7)
		{
			if (phoneBook[i].get_ID() < lowest_ID)
				lowest_ID = phoneBook[i].get_ID();
			i++;
		}
		i = 0;
		while (lowest_ID != phoneBook[i].get_ID())
			i++;
	}
	phoneBook[i].ADD(ID);
}

void	printContacts(phoneBook *phoneBook)
{
	system("clear");
	int i;

	i = 0;
	while (i <= 7)
	{
		phoneBook[i].SEARCH(i + 1);
		i++;
	}
	std::cout << "Press enter to continue...";
	std::cin.ignore();
}

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
	phoneBook phoneBook[8];
	std::string input;

	i = 0;
	while (1)
	{
		printInstructions();
		std::getline (std::cin,input);
		if (!input.compare("ADD"))
		{
			system("clear");
			addContact(phoneBook, i);
			std::cout << "Contact Added! Press enter to continue...";
			std::cin.ignore();
			i++;
		}
		else if (!input.compare("SEARCH"))
			printContacts(phoneBook);
		else if (!input.compare("EXIT"))
			exit(0);
	}
	return (0);
}