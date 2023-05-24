#include <iostream>
#include "RPN.hpp"

int	main( int argc, char* argv[] )
{
	if (argc == 2)
	{
		RPN::evaluateInput(argv[1]);
		return 0;
	}
	else
	{
		std::cout << "Bad input" << std::endl;
		return 1;
	}
}