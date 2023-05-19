#include "Span.hpp"

Span::Span( unsigned int N ) : _maxSize(N)
{
	std::cout << "Span default constructor called." << std::endl;
}

Span::Span( const Span & src ) : _maxSize(src.getMaxSize())
{
	std::cout << "Span copy constructor called." << std::endl;
	*this = src;
}

Span&	Span::operator = ( const Span & rhs )
{
	std::cout << "Span copy assignment operator called." << std::endl;
	if (this != &rhs)
	{
	// insert members copy here
	}
	return *this;
}

Span::~Span( void )
{
	std::cout << "Span destructor called." << std::endl;
}

unsigned int Span::getMaxSize( void ) const
{
	return _maxSize;
}

void	Span::addNumber( int n )
{
	if (_numbers.size() == _maxSize)
		throw std::out_of_range("Maximum size reached!");
	else
		_numbers.push_back(n);
}

std::vector<int>	Span::getArray( void ) const
{
	return _numbers;
}


void	Span::displayNumbers( void ) const
{
	if (_maxSize > 0)
	{
		for (std::vector<int>::const_iterator it = _numbers.begin(); it != _numbers.end(); it++)
			std::cout << *it << ' ';
		std::cout << std::endl;
	}
}

int	Span::longestSpan( void ) const
{
	if (_numbers.size() < 2){
		throw std::out_of_range("Not enough numbers!");
		return 0;
	}
	else{
		std::vector<int>::const_iterator itMin = std::min_element(_numbers.begin(), _numbers.end());
		std::vector<int>::const_iterator itMax = std::max_element(_numbers.begin(), _numbers.end());		
		return *itMax - *itMin;
	}
}

int	Span::shortestSpan( void ) const
{
	if (_numbers.size() < 2){
		throw std::out_of_range("Not enough numbers!");
		return INT_MAX;
	}
	else{
		std::vector<int> sorted_numbers (_numbers.begin(), _numbers.end());
		std::sort(sorted_numbers.begin(), sorted_numbers.end());
		int diff = INT_MAX;
		for (std::vector<int>::const_iterator it = sorted_numbers.begin(); it != sorted_numbers.end() - 1; it++)
			if (std::abs(*it - *(it + 1)) < diff)
				diff = std::abs(*it - *(it + 1));
		return diff;
	}
}


void	Span::populateNumbers( unsigned int n )
{
	int arr[n];

	if (_numbers.size() + n > _maxSize)
		throw std::out_of_range("Too many new numbers!");
	else
	{
		srand(time(NULL));
		for (unsigned int i = 0; i < n; i++)
			arr[i] = rand();
	}
	_numbers.insert(_numbers.end(), arr, arr + n);
}