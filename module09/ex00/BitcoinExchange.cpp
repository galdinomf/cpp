#include "BitcoinExchange.hpp"
		
std::map<std::string, float>	BitcoinExchange::_dataBase;

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
				// _container.push_back(s);
				_dataBase.insert(std::pair<std::string, float>(s.substr(0,10), atof(s.substr(11).c_str())));

			for (std::map<std::string, float>::iterator it = _dataBase.begin(); it != _dataBase.end(); it++)
				std::cout << it->first << " | " << it->second << std::endl;
		}
		else
			std::cout << "Unable to open input file" << std::endl;
	}
}