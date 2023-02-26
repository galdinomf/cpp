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
		
		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );
};