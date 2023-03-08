#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	public:
		Brain( void );
		Brain( const Brain & src );
		Brain& operator = ( const Brain & rhs);
		~Brain( void );

		std::string	ideas[100];
};

#endif