/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/03 13:40:10 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/05/05 14:41:52 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Pointer of str       = " << &str << std::endl;
	std::cout << "Pointer of stringPTR = " << stringPTR << std::endl;
	std::cout << "Pointer of stringREF = " << &stringREF << std::endl << std::endl;

	std::cout << "Printing str	   = " << str << std::endl;
	std::cout << "Printing stringPTR = " << *stringPTR << std::endl;
	std::cout << "Printing stringREF = " << stringREF << std::endl;
	

	return (0);
}