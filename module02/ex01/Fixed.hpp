#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int					_value;
		static const int	_fracBits = 8;
	
	public:
		Fixed( void );
		Fixed( const Fixed & src );
		Fixed & operator=(const Fixed & rhs);
		~Fixed( void );
		Fixed( const int n );
		Fixed( const float f);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float	toFloat ( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator << (std::ostream & o, const Fixed & fn);

float	pow(int	base, int exp);

#endif