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

bool	RPN::isSignal( char c )
{
	char signals[] = {'+', '-', '*', '/'};
	for (int i = 0; i < 4; i++)
	{
		if (signals[i] == c)
			return true;
	}
	return false;
}

bool	RPN::validateInput( const std::string & input )
{
	for (unsigned int i = 0; i < input.size(); i++)
	{
		if ((!std::isdigit(input[i])) && (!RPN::isSignal(input[i])) && (input[i] != ' '))
			return false;
	}
	return true;
}

void	RPN::evaluateInput ( const std::string & input )
{
	std::stringstream	ss(input);
	std::string			s;

	while (ss >> s)
		std::cout << s << std::endl;
	
}