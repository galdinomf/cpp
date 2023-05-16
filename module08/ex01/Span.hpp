#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>

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

	private:
		std::vector<int>	_numbers;
		const unsigned int	_maxSize;  
};

#endif