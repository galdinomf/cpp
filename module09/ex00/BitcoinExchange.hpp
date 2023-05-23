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

		static bool	valueIsValid( std::string& value );
		static bool	dateIsValid( std::string& date );

	public:
		static BitcoinExchange&		getInstance( void );
		static void					readFileAndLoadContainer( char * );

};

char	**ft_split(char const *s, char c);
char	*ft_strtrim(char const *s1, char const *set);

#endif