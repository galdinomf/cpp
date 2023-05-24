#include "RPN.hpp"

RPN::RPN( void )
{
	std::cout << "RPN default constructor called." << std::endl;
}

RPN::RPN( const RPN & src )
{
	std::cout << "RPN copy constructor called." << std::endl;
	*this = src;
}

RPN&	RPN::operator = ( const RPN & rhs )
{
	std::cout << "RPN copy assignment operator called." << std::endl;
	if (this != &rhs)
	{
	// insert members copy here
	}
	return *this;
}

RPN::~RPN( void )
{
	std::cout << "RPN destructor called." << std::endl;
}

void	RPN::evaluateInput ( const std::string & input )
{
	std::cout << input << std::endl;
}