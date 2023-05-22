#include "BitcoinExchange.hpp"

std::vector<std::string> BitcoinExchange::_container;

BitcoinExchange::BitcoinExchange( void )
{
	std::cout << "BitcoinExchange default constructor called." << std::endl;
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & src )
{
	std::cout << "BitcoinExchange copy constructor called." << std::endl;
	*this = src;
}

BitcoinExchange&	BitcoinExchange::operator = ( const BitcoinExchange & rhs )
{
	std::cout << "BitcoinExchange copy assignment operator called." << std::endl;
	if (this != &rhs)
	{
	// insert members copy here
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange( void )
{
	std::cout << "BitcoinExchange destructor called." << std::endl;
}

BitcoinExchange&	BitcoinExchange::getInstance( void )
{
	static BitcoinExchange	instance;
	return instance;
}

void	BitcoinExchange::readFileAndLoadContainer( char* inputFile )
{
	std::ifstream	ifs(inputFile, std::ios::in);
	{
		if (ifs.is_open())
		{
			std::string	s;
			while (std::getline(ifs, s))
				_container.push_back(s);
		}
		else
			std::cout << "Unable to open input file" << std::endl;
	}
}