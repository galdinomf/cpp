#include <iostream>
#include "PmergeMe.hpp"

int	main( int argc, char* argv[] )
{
	std::cout << "Hello world!" << std::endl;
	if (argc < 2)
	{
		std::cout << "Bad input" << std::endl;
		return 1;
	}
	else
	{
		if (!PmergeMe::validateInput(argv))
		{
			std::cout << "Bad input" << std::endl;
			return 1;
		}
		else
		{
			///APAGAR!!!
			std::deque<int> numbers;
			int i = 0;
			while (argv[++i])
				numbers.push_back(atoi(argv[i]));
			PmergeMe::mergeInsertSort(numbers);
		}

	}
	return 0;
}