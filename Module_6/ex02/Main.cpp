/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rkieboom <rkieboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 15:29:46 by rkieboom      #+#    #+#                 */
/*   Updated: 2022/10/26 12:14:53 by rkieboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"
#include <iostream>

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

static int	generateNum(int min, int max)
{
	srand(time(NULL));
	return (min + rand() % (( max + 1 ) - min));
}

Base*	generate(void)
{
	Base	*base;
	int		randomNum;

	randomNum = generateNum(1, 3);
	if (randomNum == 1)
		base = new A();
	else if (randomNum == 2)
		base = new B();
	else
		base = new C();
	return (base);
}

static void	identify(Base *base)
{
	A *a = dynamic_cast<A *>(base);
	B *b = dynamic_cast<B *>(base);
	C *c = dynamic_cast<C *>(base);

	if (a)
		std::cout << "A" << std::endl;
	else if (b)
		std::cout << "B" << std::endl;
	else if (c)
		std::cout << "C" << std::endl;
}

int	main(void)
{
	Base *base;
	base = generate();
	
	identify(base);
	return (0);
}
