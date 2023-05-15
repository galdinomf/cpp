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
	std::vector<int>::iterator it = easyfind(numbers, 5);
	std::cout << *it << std::endl;

	std::set<int> intSet;
	intSet.insert(10);
	intSet.insert(20);
	intSet.insert(30);
	std::set<int>::iterator it2 = easyfind(intSet, 40);
	std::cout << *it2 << std::endl;
	return 0;
}