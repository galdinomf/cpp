#ifndef NEWCLASS_HPP
# define NEWCLASS_HPP

class NewClass
{
	public:
		NewClass( void );
		NewClass( const NewClass & src );
		NewClass& operator = ( const NewClass & rhs);
		~NewClass( void );

	private:
		// private attributes here
};

#endif