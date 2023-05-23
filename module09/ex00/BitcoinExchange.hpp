#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <fstream>
# include <iostream>
# include <map>
# include <cstdlib>

class BitcoinExchange
{
	private:
		BitcoinExchange( void );
		BitcoinExchange( const BitcoinExchange & src );
		BitcoinExchange& operator = ( const BitcoinExchange & rhs);
		~BitcoinExchange( void );

		// static std::vector<std::string>		_container;
		static std::map<std::string, float>	_dataBase;

	public:
		static BitcoinExchange&			getInstance( void );
		static void						readFileAndLoadContainer( char * );

};

#endif