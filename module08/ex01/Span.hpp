#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>
# include <limits.h>
# include <stdlib.h>

class Span
{
	public:
		Span( unsigned int );
		Span( const Span & src );
		Span& operator = ( const Span & rhs);
		~Span( void );

		std::vector<int>	getArray( void ) const;
		unsigned int		getMaxSize( void ) const;
		void				addNumber( int );

		void				displayNumbers( void ) const;
		int					longestSpan( void ) const;
		int					shortestSpan( void ) const;
		void				populateNumbers( unsigned int );

	private:
		std::vector<int>	_numbers;
		const unsigned int	_maxSize;  
};

#endif