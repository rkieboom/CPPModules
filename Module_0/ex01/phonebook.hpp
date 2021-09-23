/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 11:46:48 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/09/23 15:39:47 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string.h>
# include <stdlib.h>

class phoneBook
{
	private:

	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	int id;

	public:
	
	void	ADD(int ID)
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

	void	SEARCH(int index)
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

	int		contact_exist(void)
	{
		if (firstName.empty() && lastName.empty())
			return (0);
		else
			return (1);
	}

	int		get_ID(void)
	{
		return id;
	}
} ;



#endif