#include <iostream>
#include "ScalarConverter.hpp"

int	main( int argc, char *argv[] )
{
	std::cout << "Hello world!" << std::endl;
	if (argc == 2)
		ScalarConverter::convert(argv[1]);
	return 0;
}