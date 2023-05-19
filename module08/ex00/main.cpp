#include <iostream>
#include <vector>
#include <set>

#include "easyfind.hpp"

int	main( void )
{
	std::cout << "Hello world!" << std::endl;
	std::vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);
	int	n = 5;
	std::vector<int>::iterator it;
	try
	{
		it = easyfind(numbers, n);	
		std::cout << *it << std::endl;
	}
	catch(...){std::cout << "value " << n << " not found" << std::endl;}

	std::set<int> intSet;
	intSet.insert(10);
	intSet.insert(20);
	intSet.insert(30);
	n = 40;
	std::set<int>::iterator it2;
	try
	{
		it2 = easyfind(intSet, n);
		std::cout << *it2 << std::endl;
	}
	catch(...){std::cout << "value " << n << " not found" << std::endl;}
	return 0;
}