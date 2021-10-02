/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 11:39:45 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/09/30 13:34:09 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	phoneBook::addContact(int ID)
{
	int i;
	int lowest_ID;


	i = 0;
	while (i <= 7 && contact[i].contact_exist())
		i++;
	if (contact[i].contact_exist())
	{
		i = 1;
		lowest_ID = contact[i].get_ID();
		while (i <= 7)
		{
			if (contact[i].get_ID() < lowest_ID)
				lowest_ID = contact[i].get_ID();
			i++;
		}
		i = 0;
		while (lowest_ID != contact[i].get_ID())
			i++;
	}
	contact[i].ADD(ID);
}

void	phoneBook::printContacts(void)
{
	system("clear");
	int i;

	i = 0;
	while (i <= 7)
	{
		contact[i].SEARCH(i + 1);
		i++;
	}
	std::cout << "Press enter to continue...";
	std::cin.ignore();
}
