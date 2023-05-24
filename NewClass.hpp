#ifndef NEWCLASS_HPP
# define NEWCLASS_HPP

class NewClass
{
	public:
		NewClass( void );
		NewClass( const NewClass & );
		NewClass& operator = ( const NewClass & );
		~NewClass( void );

	private:
		// private attributes here
};

#endif