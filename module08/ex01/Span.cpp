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
	for (std::vector<int>::const_iterator it = _numbers.begin(); it != _numbers.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;
}