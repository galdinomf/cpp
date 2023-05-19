#include <iostream>
#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
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
	std::cout << "printing mutant stack mstack out" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "printing stack s out" << std::endl;
	while (!s.empty())
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}
	std::cout << "printing mstack out while emptying it" << std::endl;
	while (!mstack.empty())
	{
		std::cout << "mstack's size = " << mstack.size() << std::endl;
		std::cout << mstack.top() << std::endl;
		mstack.pop();
	}
	std::cout << "mstack's size before exiting program = " << mstack.size() << std::endl;
	return 0;
}

// int main()
// {
// 	std::list<int> mstack;

// 	mstack.push_back(5);
// 	mstack.push_back(17);
// 	std::cout << *mstack.rbegin() << std::endl;
// 	mstack.pop_back();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	//[...]
// 	mstack.push_back(0);
// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	std::cout << "printing list mstack out" << std::endl;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::list<int> s(mstack);
// 	std::cout << "printing list s out" << std::endl;
// 	while (!s.empty())
// 	{
// 		std::cout << *s.rbegin() << std::endl;
// 		s.pop_back();
// 	}
// 	std::cout << "printing mstack out while emptying it" << std::endl;
// 	while (!mstack.empty())
// 	{
// 		std::cout << "mstack's size = " << mstack.size() << std::endl;
// 		std::cout << *mstack.rbegin() << std::endl;
// 		mstack.pop_back();
// 	}
// 	std::cout << "mstack's size before exiting program = " << mstack.size() << std::endl;
// 	return 0;
// }