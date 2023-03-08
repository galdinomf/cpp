#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal & src );
		WrongAnimal& operator = ( const WrongAnimal & rhs);
		~WrongAnimal( void );
		
		std::string	getType( void ) const;

		void makeSound( void ) const;

	protected:
		std::string	_type;
};

#endif