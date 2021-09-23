/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/23 11:18:52 by rkieboom      #+#    #+#                 */
/*   Updated: 2021/09/23 14:20:18 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (argv[i])
		{
			 for (size_t x=0; x<strlen(argv[i]); x++)
				putchar(toupper(argv[i][x]));
			i++;
			if (argv[i])
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}