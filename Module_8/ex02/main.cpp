#include <iostream>
#include "MutantStack.hpp"
#include <list>

static void compareToList()
{
	std::list<int> mstack;

	if (mstack.empty())
		std::cout << "mstack is empty" << std::endl;
	else
		std::cout << "mstack is not empty" << std::endl;

	mstack.push_back(5);
	mstack.push_back(17);
	std::cout << "top missing here no top() in list" << std::endl;
	// std::cout << mstack.top() << std::endl; // no top() in list
	mstack.pop_back();
	std::cout << mstack.size() << std::endl;
	mstack.push_back(3); 
	mstack.push_back(5);
	mstack.push_back(737);
	std::list<int>::iterator it = mstack.begin(); std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) 
	{
		std::cout << *it << std::endl;
		++it; 
	}
	std::cout << "size: " << mstack.size() << std::endl;
	// std::stack<int> s(mstack); not possible
}

static void mutantTest()
{
	MutantStack<int> mstack;

	if (mstack.empty())
		std::cout << "mstack is empty" << std::endl;
	else
		std::cout << "mstack is not empty" << std::endl;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
	++it; }
	std::cout << "size: " << mstack.size() << std::endl;
}

int	main(void)
{
	mutantTest();
	std::cout << "----------------" << std::endl;
	compareToList();
	return 0;
}
