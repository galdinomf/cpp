#include "RPN.hpp"

std::stack<int>	RPN::_stack;

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

int	RPN::isSignal( char c )
{
	char signals[] = {'+', '-', '*', '/'};
	for (int i = 0; i < 4; i++)
	{
		if (signals[i] == c)
			return i;
	}
	return -1;
}

bool	RPN::validateInput( const std::string & input )
{
	for (unsigned int i = 0; i < input.size(); i++)
	{
		if ((!std::isdigit(input[i])) && (RPN::isSignal(input[i]) == -1) && (input[i] != ' '))
			return false;
	}
	return true;
}

void	RPN::evaluateInput ( const std::string & input )
{
	std::stringstream	ss(input);
	std::string			s;

	while (ss >> s)
	{
		int a;
		int b;
		switch (RPN::isSignal(s[0]))
		{
			case -1:
				RPN::_stack.push(atoi(s.c_str()));
				break;
			case 0:
				a = RPN::_stack.top();
				RPN::_stack.pop();
				b = RPN::_stack.top();
				RPN::_stack.pop();
				RPN::_stack.push(b + a);
				break;
			case 1:
				a = RPN::_stack.top();
				RPN::_stack.pop();
				b = RPN::_stack.top();
				RPN::_stack.pop();
				RPN::_stack.push(b - a);
				break;
			case 2:
				a = RPN::_stack.top();
				RPN::_stack.pop();
				b = RPN::_stack.top();
				RPN::_stack.pop();
				RPN::_stack.push(b * a);
				break;
			case 3:
				a = RPN::_stack.top();
				RPN::_stack.pop();
				b = RPN::_stack.top();
				RPN::_stack.pop();
				RPN::_stack.push(b / a);
				break;

		}

	}
	std::cout << _stack.top() << std::endl;
	
}