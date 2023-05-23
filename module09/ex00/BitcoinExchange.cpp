#include "BitcoinExchange.hpp"
		
std::map<std::string, float>	BitcoinExchange::_dataBase;

BitcoinExchange::BitcoinExchange( void )
{
	std::cout << "BitcoinExchange default constructor called." << std::endl;
	std::ifstream	ifs("data.csv", std::ios::in);
	
	if (ifs.is_open())
	{
		std::string	s;
		while (std::getline(ifs, s))
		{
			char** split = ft_split(s.c_str(), ',');
			std::string	tr2 = " ";
			const char* tr = tr2.c_str();
			char * str = ft_strtrim(split[0], tr);
			char * str2 = ft_strtrim(split[1], tr);
			std::string	date;
			std::string value;
			if (str)
				date = str;
			if (str2)
				value  = str2;
			free(split[0]);
			free(split[1]);
			free(split);
			free(str);
			free(str2);
			if (BitcoinExchange::dateIsValid(date))
				_dataBase.insert(std::pair<std::string, float>(date, atof(value.c_str())));
		}
	}
	else
		std::cout << "Unable to load data file" << std::endl;			
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
	std::string		s;
	std::ifstream	ifs(inputFile, std::ios::in);
	
	if (ifs.is_open())
	{
		std::string	s;
		while (std::getline(ifs, s))
		{
			char** split = ft_split(s.c_str(), '|');
			std::string	tr2 = " ";
			const char* tr = tr2.c_str();
			char * str = ft_strtrim(split[0], tr);
			char * str2 = ft_strtrim(split[1], tr);
			std::string	date;
			std::string value;
			if (str)
				date = str;
			if (str2)
				value  = str2;
			free(split[0]);
			free(split[1]);
			free(split);
			free(str);
			free(str2);
			if (!BitcoinExchange::dateIsValid(date))
				std::cout << "Error: date input invalid => " << date << std::endl;
			else if (!BitcoinExchange::valueIsValid(value))
				std::cout << "Error: value input invalid => " << value << std::endl;
			else
			{
				std::map<std::string, float>::iterator it = _dataBase.upper_bound(date);
				--it;
				std::cout << date << " => " << value << " = " << atof(value.c_str()) * (it->second) << std::endl;
			}
		}
			// _container.push_back(s);
			// _dataBase.insert(std::pair<std::string, float>(s.substr(0,10), atof(s.substr(11).c_str())));
	}
	else
		std::cout << "Unable to open input file" << std::endl;			
}

bool	BitcoinExchange::dateIsValid( std::string& date )
{
	std::string	s;

	if (date.size() != 10)
		return false;
	for (unsigned int i = 0; i < date.size(); i++)
	{
		if ((!isdigit(date[i])) && (date[i] != '-'))
			return false;
	}
	s = date.substr(0, 4);
	if ((atoi(s.c_str()) < 2009) || (atoi(s.c_str()) > 2022))
		return false;
	s = date.substr(5, 2);
	if ((atoi(s.c_str()) < 1) || (atoi(s.c_str()) > 12))
		return false;
	s = date.substr(8, 2);
	if ((atoi(s.c_str()) < 1) || (atoi(s.c_str()) > 31))
		return false;
	return true;
}

bool	BitcoinExchange::valueIsValid( std::string& value )
{
	for (unsigned int i = 0; i < value.size(); i++)
	{
		if ((!isdigit(value[i])) && (value[i] != '.'))
			return false;
	}
	if ((atof(value.c_str()) < 0) || (atof(value.c_str()) > 1000))
		return false;
	return true;
}