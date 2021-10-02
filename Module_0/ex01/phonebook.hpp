/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 11:46:48 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/09/30 13:18:31 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string.h>
# include <stdlib.h>

class Contacts
{
	private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	int id;

	public:
	void	ADD(int ID);
	void	SEARCH(int index);
	int		contact_exist(void);
	int		get_ID(void);
} ;


class phoneBook
{
	private:
	Contacts contact[8];
	
	public:
	void	addContact(int ID);
	void	printContacts();
} ;



#endif