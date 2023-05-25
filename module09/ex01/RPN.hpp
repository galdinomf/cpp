#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <string>
# include <iostream>
# include <sstream>

class RPN
{
	private:
		RPN( void );
		RPN( const RPN & src );
		RPN& operator = ( const RPN & rhs);
		~RPN( void );

		static std::stack<int>	_stack;

		static bool	isSignal( char c );

	public:
		static bool	validateInput( const std::string & input );
		static void	evaluateInput ( const std::string & );
};

#endif