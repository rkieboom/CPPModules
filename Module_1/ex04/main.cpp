/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 15:15:18 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/10/03 16:29:07 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	get_input(std::string *filename, std::string *s1, std::string *s2)
{
	std::cout << "Enter filename: ";
	std::getline (std::cin,*filename);
	system("clear");
	std::cout << "Enter s1: ";
	std::getline (std::cin,*s1);
	system("clear");
	std::cout << "Enter s2: ";
	std::getline (std::cin,*s2);
	system("clear");
}

int main(void)
{
	std::size_t found;
	std::string buf;
	std::string filename, s1, s2;
	std::fstream file, newfile;
	
	
	get_input(&filename, &s1, &s2);
	file.open(filename, std::fstream::in);
	newfile.open(filename + ".replace", std::fstream::out);
	if (!file.is_open() || !newfile.is_open())
	{
		std::cerr << "Couldn't open file!" << std::endl;
		exit(1);
	}
	while (getline (file, buf))
	{
		found = buf.find(s1);
		while (found != std::string::npos)
		{
			buf.erase(found, s1.length());
			buf.insert(found, s2);
			found = buf.find(s1);
		}
		newfile << buf << '\n';	
	}
	file.close();
	newfile.close();
	return (0);
}
