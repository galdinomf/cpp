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
		Fixed & operator=( const Fixed & );
		~Fixed( void );
		Fixed( const int n );
		Fixed( const float f);

		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );
		float	toFloat ( void ) const;
		int		toInt( void ) const;

		bool	operator>(const Fixed & rhs) const;
		bool	operator<(const Fixed & rhs) const;
		bool	operator>=(const Fixed & rhs) const;
		bool	operator<=(const Fixed & rhs) const;
		bool	operator==(const Fixed & rhs) const;
		bool	operator!=(const Fixed & rhs) const;

		float	operator+(const Fixed & rhs) const;
		float	operator-(const Fixed & rhs) const;
		float	operator*(const Fixed & rhs) const;
		float	operator/(const Fixed & rhs) const;

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		static Fixed& 		min(Fixed& f1, Fixed& f2);
		static const Fixed& min(const Fixed& f1, const Fixed& f2);
		static Fixed& 		max(Fixed& f1, Fixed& f2);
		static const Fixed& max(const Fixed& f1, const Fixed& f2);
};

std::ostream& operator << (std::ostream & o, const Fixed & fn);

float	pow(int	base, int exp);

#endif