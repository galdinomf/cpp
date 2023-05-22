#include <iostream>
#include "BitcoinExchange.hpp"

int	main( int argc, char* argv[] )
{
	std::cout << "Hello world!" << std::endl;
	BitcoinExchange& btcEx = BitcoinExchange::getInstance();

	if (argc == 2)
		btcEx.readFileAndLoadContainer(argv[1]);
	return 0;
}