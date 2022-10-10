/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 15:37:16 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/10 15:59:48 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>


Base::Base()
{
	
}

static int	generateNum(int min, int max)
{
	srand(time(NULL));
	return (min + rand() % (( max + 1 ) - min));
}

Base*	generate(void)
{
	Base *base;
	int	randomNum;
	randomNum = generateNum(1, 3);
	if (randomNum == 1)
		base = new A;
	else if (randomNum == 2)
		base = new B;
	else if (randomNum == 3)
		base = new C;
	
	

	return (NULL);
}