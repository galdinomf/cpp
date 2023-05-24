#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <string>
# include <iostream>

class RPN
{
	private:
		RPN( void );
		RPN( const RPN & src );
		RPN& operator = ( const RPN & rhs);
		~RPN( void );

		static std::stack<int>	_stack;

	public:
		static void	evaluateInput ( const std::string & );
};

#endif