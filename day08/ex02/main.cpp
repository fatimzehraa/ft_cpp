#include <iostream>
#include "MutantStack.hpp"
#include <stack>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	const MutantStack<int> cmstack = mstack;
	std::cout << "hello: " << *cmstack.cbegin() << std::endl;
	std::cout << "hello: " << *cmstack.crbegin() << std::endl;
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	std::stack<int> s(mstack);
	return 0;
}
