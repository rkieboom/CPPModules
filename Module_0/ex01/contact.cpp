/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/30 13:05:00 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/09/30 13:11:02 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contacts::ADD(int ID)
	{
		std::cout << "Enter first name: ";
		std::getline (std::cin,firstName);
		std::cout << "Enter last name: ";
		std::getline (std::cin,lastName);
		std::cout << "Enter nick name: ";
		std::getline (std::cin,nickName);
		std::cout << "Enter phone number: ";
		std::getline (std::cin,phoneNumber);
		std::cout << "Enter your darkest secret: ";
		std::getline (std::cin,darkestSecret);
		id = ID;
	}

	void	Contacts::SEARCH(int index)
	{
		if (contact_exist())
		{
			std::cout << index << " ";

			std::cout.width(10);
			if (firstName.length() <= 10)
				std::cout << std::left << firstName << " | ";
			else
				std::cout << (firstName.substr(0, 9) += '.') << " | ";

			std::cout.width(10);
			if (lastName.length() <= 10)
				std::cout << std::left << lastName << " | ";
			else
				std::cout << (lastName.substr(0, 9) += '.') << " | ";

			std::cout.width(10);
			if (nickName.length() <= 10)
				std::cout << std::left << nickName << std::endl;
			else
				std::cout << (nickName.substr(0, 9) += '.') << std::endl;
		}
	}

	int		Contacts::contact_exist(void)
	{
		if (firstName.empty() && lastName.empty())
			return (0);
		else
			return (1);
	}

	int		Contacts::get_ID(void)
	{
		return id;
	}