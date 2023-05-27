#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void )
{
	std::cout << "PmergeMe default constructor called." << std::endl;
}

PmergeMe::PmergeMe( const PmergeMe & src )
{
	std::cout << "PmergeMe copy constructor called." << std::endl;
	*this = src;
}

PmergeMe&	PmergeMe::operator = ( const PmergeMe & rhs )
{
	std::cout << "PmergeMe copy assignment operator called." << std::endl;
	if (this != &rhs)
	{
	// insert members copy here
	}
	return *this;
}

PmergeMe::~PmergeMe( void )
{
	std::cout << "PmergeMe destructor called." << std::endl;
}

bool	PmergeMe::validateInput( char** input )
{
	int	i = 0;
	while (input[++i])
	{
		int j = -1;
		while (input[i][++j])
		{
			if (!std::isdigit(input[i][j]))
				return false;
		}
		if (atoi(input[i]) < 0)
			return false; 
	}
	return true;
}

void PmergeMe::mergeInsertSort( std::deque<int>& numbers )
{
	for (unsigned int i = 1; i < numbers.size(); i++)
	{
		std::deque<int>::iterator it = numbers.begin() + i;
		while ((it != numbers.begin()) && (*(it - 1) > numbers[i]))
			--it;
		numbers.insert(it, numbers[i]);
		numbers.erase(numbers.begin() + i + 1);
		std::cout << "--------------------------------------------" << std::endl;
		for (unsigned int j = 0; j < numbers.size(); j++)
			std::cout << numbers[j] << " " ;
		std::cout <<  std::endl;
	}
}